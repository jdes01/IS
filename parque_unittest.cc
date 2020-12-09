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
  Sendero s("hola");
  Sendero ss("adios");
  Sendero sss("hola");
  p.addSenderos(s);
  p.addSenderos(ss);
  p.addSenderos(sss);

  EXPECT_EQ( "adios",         ss.getNombre());
  EXPECT_EQ( "hola",          s.getId());
  EXPECT_EQ( "hola",          s.getNombre());
  EXPECT_EQ( 2,               p.getSenderos().size());
}
