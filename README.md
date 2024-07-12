# Trabajo Práctico Número 2

## Uso del repositorio

Este repositorio utiliza [pre-commit](https://pre-commit.com) para validaciones de formato. Para trabajar con el mismo usted debería tener instalado:

1. pre-commit (https://pre-commit.com/#install)

Después de clonar el repositorio usted debería ejecutar el siguiente comando:

```
pre-commit install
```

Para generar la documentación del proyecto se utiliza el siguiente comando:

```
make doc

```

Para visualizar la documentación generada del proyecto se utiliza el siguiente comando:

```
open build/doc/html/index.html

```
Para compilar el proyecto se utiliza el siguiente comando:

```
make all

```

Para correr las pruebas del proyecto se utiliza el siguiente comando:

Para generar el proyecto de ceedling:

```
ceedling new . 

```

Para ejecutar las pruebas diseñadas en test_leds.c:

```
ceedling        

```
## License

This work is distributed under the terms of the [MIT](https://spdx.org/licenses/MIT.html) license.
