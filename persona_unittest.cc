#include "persona.h"
#include "gtest/gtest.h"

TEST(Persona, Constructor) {

  Persona p("Nombre", "Primer Apellido", "Segundo Apellido", "12345678A", "123456789", 1, 2, 3, "direccion", "correo@mail.com");
  
  EXPECT_EQ( "Nombre",           p.getNombre().nombre );
  EXPECT_EQ( "Primer Apellido",  p.getNombre().primerApellido );
  EXPECT_EQ( "Segundo Apellido", p.getNombre().segundoApellido );
  EXPECT_EQ( "12345678A",        p.getDni() );
  EXPECT_EQ( "123456789",        p.getTelefono() );
  EXPECT_EQ( 1,                  p.getFechaNacimiento().dia );
  EXPECT_EQ( 2,                  p.getFechaNacimiento().mes );
  EXPECT_EQ( 3,                  p.getFechaNacimiento().ano );
  EXPECT_EQ( "direccion",        p.getDireccion() );
  EXPECT_EQ( "correo@mail.com",  p.getCorreo() );
}