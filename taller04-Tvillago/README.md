# Taller uso de librerías
Taller sobre uso de librerías de terceros en C.

## Instrucciones
En esta práctica se debe implementar un programa que calcule el hash [SHA-1](https://en.wikipedia.org/wiki/SHA-1) de un texto ingresado por el usuario. SHA-1 produce un hash de 20 bytes a partir de un texto de cualquier longitud.

Para implementar el algoritmo SHA-1 es necesario usar una librería de terceros (el algoritmo es relativamente complejo). La librería a utilizar es *libsha1*, el repositorio del código fuente está en:

* https://github.com/dottedmag/libsha1

Primero instale los siguientes programas (para evitar errores): 

```
sudo apt install autoconf autogen libtool shtool
```

Para usar libsha1 es necesario clonar el repositorio y compilar la librería:
```
$ git clone https://github.com/dottedmag/libsha1.git
$ cd libsha1
$ ./autogen.sh
$ make
```

Dentro de esta librería, revisar el archivo llamado _text.c_, donde muestra un ejemplo de cómo usar esta librería.


## Salida
Una vez clonada y compilada la librería, y que haya completado el _main.c_ el funcionamiento esperado del programa sería:

```
$./hash
Ingrese texto: hola
El texto ingresado tiene 5 caracteres (incluido el salto de línea).
El texto: 'hola' en SHA1 es: 
0x9980b85d3383e3a2fb45eb7d066a4879a9dad0
```
Para comprobar el funcionamiento correcto del programa usar: http://www.sha1-online.com/

Nota: Las librerías compiladas, estáticas y dinámicas, deberán estar en el directorio oculto _.libs_. Una vez compiladas las librerías, copiar la cabecera y las librerías al repositorio de la práctica. La práctica debe ser compilada de manera estática por defecto usando *make* y de manera dinámica usando *make hash_dyn*, el primero generará un ejecutable llamado _hash_ y el otro _hash_dyn_.

## Validacion
```
make -f Testfile hash
make -f Testfile makefile
```

## Entregable
Completar este taller agregando el código necesario, las librerías y modificando el Makefile con mínimo un commit.
