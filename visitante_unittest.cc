#include "visitante.h"
#include "gtest/gtest.h"

TEST(Visitante, Constructor) {

  Visitante v("Discapacidad", "Nombre", "Primer Apellido", "Segundo Apellido", "12345678A", "123456789", 1, 2, 3, "direccion", "correo@mail.com");
  
  EXPECT_EQ( "Discapacidad",     v.getDiscapacidad() );
  EXPECT_EQ( "Nombre",           v.getNombre().nombre );
  EXPECT_EQ( "Primer Apellido",  v.getNombre().primerApellido );
  EXPECT_EQ( "Segundo Apellido", v.getNombre().segundoApellido );
  EXPECT_EQ( "12345678A",        v.getDni() );
  EXPECT_EQ( "123456789",        v.getTelefono() );
  EXPECT_EQ( 1,                  v.getFechaNacimiento().dia );
  EXPECT_EQ( 2,                  v.getFechaNacimiento().mes );
  EXPECT_EQ( 3,                  v.getFechaNacimiento().ano );
  EXPECT_EQ( "direccion",        v.getDireccion() );
  EXPECT_EQ( "correo@mail.com",  v.getCorreo() );
}
