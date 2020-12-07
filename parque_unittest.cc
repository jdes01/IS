#include "parque.h"
#include "gtest/gtest.h"

TEST(Parque, Constructor) {

  Parque p("Nombre", "Ubicacion", "Superficie");
  
  EXPECT_EQ( "Nombre",           p.getNombre());
  EXPECT_EQ( "Ubicacion",        p.getUbicacion());
  EXPECT_EQ( "Superficie",       p.getSuperficie());
}

TEST(Parque, addSenderos) {

  Parque s("Nombre", "Ubicacion", "Superficie");
  
  EXPECT_EQ( "Nombre",           s.getNombre());
  EXPECT_EQ( "Ubicacion",        p.getUbicacion());
  EXPECT_EQ( "Superficie",       p.getSuperficie());
}