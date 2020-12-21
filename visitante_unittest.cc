#include "visitante.h"
#include "gtest/gtest.h"

TEST(Visitante, Constructor) {

  Visitante v("discapacidad", "nombre", "primerApellido", "segundoApellido", "dni", "telefono", 1, 2, 3, "direccion", "correo@mail.com"); 
  
  EXPECT_EQ( "discapacidad",     v.getDiscapacidad() );
  EXPECT_EQ( "nombre",           v.getNombre().nombre );
  EXPECT_EQ( "primerApellido",   v.getNombre().primerApellido );
  EXPECT_EQ( "segundoApellido",  v.getNombre().segundoApellido );
  EXPECT_EQ( "dni",              v.getDni() );
  EXPECT_EQ( "telefono",         v.getTelefono() );
  EXPECT_EQ( 1,                  v.getFechaNacimiento().dia );
  EXPECT_EQ( 2,                  v.getFechaNacimiento().mes );
  EXPECT_EQ( 3,                  v.getFechaNacimiento().ano );
  EXPECT_EQ( "direccion",        v.getDireccion() );
  EXPECT_EQ( "correo@mail.com",  v.getCorreo() );
}
