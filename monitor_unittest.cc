#include "monitor.h"
#include "gtest/gtest.h"

TEST(Monitor, Constructor) {

  Monitor m("Nombre", "Primer Apellido", "Segundo Apellido", "12345678A", "123456789", 1, 2, 3, "direccion", "correo@mail.com"); 
  
  EXPECT_EQ( "0",                m.getId());
  EXPECT_EQ( "Nombre",           m.getNombre().nombre );
  EXPECT_EQ( "Primer Apellido",  m.getNombre().primerApellido );
  EXPECT_EQ( "Segundo Apellido", m.getNombre().segundoApellido );
  EXPECT_EQ( "12345678A",        m.getDni() );
  EXPECT_EQ( "123456789",        m.getTelefono() );
  EXPECT_EQ( 1,                  m.getFechaNacimiento().dia );
  EXPECT_EQ( 2,                  m.getFechaNacimiento().mes );
  EXPECT_EQ( 3,                  m.getFechaNacimiento().ano );
  EXPECT_EQ( "direccion",        m.getDireccion() );
  EXPECT_EQ( "correo@mail.com",  m.getCorreo() );
}
