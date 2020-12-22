#include "parque.h"
#include "sendero.h"
#include "gtest/gtest.h"

TEST(Parque, Constructor) {

  Parque p("Nombre", "Ubicacion", 1);
  
  EXPECT_EQ( "Nombre",           p.getNombre());
  EXPECT_EQ( "Ubicacion",        p.getUbicacion());
  EXPECT_EQ( 1,                  p.getSuperficie());
}

TEST(Parque, addSenderos) {

  Parque p("Nombre", "Ubicacion", 1);

  Sendero s("hola", p);
  Sendero ss("adios", p);
  Sendero sss("hola", p);

  p.addSendero(s);
  p.addSendero(ss);
  p.addSendero(sss);

  EXPECT_EQ( "adios",         ss.getNombre());
  EXPECT_EQ( "0",             s.getId());
  EXPECT_EQ( "hola",          s.getNombre());
  EXPECT_EQ( 2,               p.getSenderos().size());
}
