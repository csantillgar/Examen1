# Examen1
## Cintia Santillán García

https://github.com/csantillgar/Examen1.git

### Índice
1. Preguntas de opción múltiple 
2. Problemas de codificación
3. Preguntas de desarrollo
4. Fuentes
### 1.Preguntas de opción múltiple
1. C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?
    
    a. Orientación a objetos
    
    b. Tipado fuerte y estático
    
    c. Soporte a la programación de bajo nivel
    
    ***d. Todas las anteriores***(CORRECTA)

2. Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?

    a. Un archivo que contiene código fuente C++

    ***b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación***(CORRECTA)

    c. Un archivo que almacena las configuraciones del entorno de desarrollo

    d. Un archivo que guarda los resultados de las pruebas unitarias

3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

    a. Variables que almacenan un valor específico

    ***b. Variables que almacenan la dirección de otra variable***(CORRECTA)

    c. Funciones que apuntan a otras funciones

    d. Ninguna de las anteriores


    
### 2.Problemas de codificación
1. **Operaciones Básicas:** El sistema debe ser capaz de realizar operaciones matemáticas básicas para gestionar datos numéricos.

Encontrarás este código dentro de la carpeta: Ejercicio1-Operaciones Básicas

2. **Gestión de Estudiantes:** La escuela requiere llevar un control sobre sus estudiantes.

Encontrarás este código dentro de la carpeta: Ejercicio2-Gestión de Estudiantes

3. **Optimización de Memoria:** La gestión eficiente de la memoria es esencial para garantizar el rendimiento del sistema y evitar pérdidas de información.

Encontrarás este código dentro de la carpeta: Ejercicio2-Optimización de Memoria

4. **Manejo de Excepciones:** Dada la importancia de los datos de los estudiantes, el sistema debe ser robusto frente a errores inesperados.

Encontrarás este código dentro de la carpeta: Ejercicio2-Manejo de Excepciones

5. **Registro de Materias:** Cada estudiante tiene un conjunto de materias asignadas.

Encontrarás este código dentro de la carpeta: Ejercicio2-Registro de Materias





### 3.Preguntas de desarrollo
1. La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica:

* ¿Cómo la programación orientada a objetos difiere de la programación procedimental?

La programación orientada a objetos (POO) y la programación procedimental son dos enfoques diferentes para organizar y estructurar el código. En la programación procedimental, el código se organiza en funciones o procedimientos que realizan tareas específicas. La atención se centra en los datos y en cómo se manipulan a través de estas funciones.

Por otro lado, la programación orientada a objetos se basa en la idea de "objetos", que combinan datos y funciones en una única unidad. Los objetos interactúan entre sí, y el código se organiza en clases que definen la estructura y el comportamiento de los objetos. La POO favorece la reutilización del código y proporciona una forma más natural de modelar el mundo real.
* ¿Cómo C++ brinda soporte para ambos paradigmas?

C++ es un lenguaje de programación que brinda soporte tanto para la programación orientada a objetos como para la programación procedimental. En C++, puedes utilizar clases y objetos para seguir un enfoque orientado a objetos. Esto te permite encapsular datos y funciones relacionadas en una estructura cohesiva.

Al mismo tiempo, C++ conserva la capacidad de programación procedimental heredada de C. Puedes escribir funciones independientes que manipulan datos de manera más tradicional. La flexibilidad de C++ permite a los programadores elegir el paradigma que mejor se adapte a sus necesidades, o incluso combinar ambos enfoques en un solo programa. Esto hace que C++ sea un lenguaje muy versátil y ampliamente utilizado en diversos contextos.

2. Las excepciones en C++ tienen un comportamiento específico. Describe:

* ¿Qué es la propagación de una excepción?

La propagación de una excepción se refiere al proceso en el cual una excepción lanzada en un bloque de código se transfiere hacia bloques superiores en la pila de llamadas hasta encontrar un bloque catch adecuado. Esto permite manejar la excepción en un lugar específico del código en lugar de manejarla inmediatamente en el lugar donde se generó. Es como pasar "la notificación de error" hacia arriba en la jerarquía del programa hasta que alguien pueda manejarla apropiadamente.
* ¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?

Si una excepción lanzada no es capturada por ningún bloque catch en la pila de llamadas actual, el programa termina abruptamente y se llama a la función 'terminate()'. Antes de finalizar, se ejecutan destructores de objetos locales en cada nivel de la pila de llamadas, pero no se garantiza la ejecución de ninguna otra lógica. En resumen, si no se maneja una excepción, el programa generalmente se detendrá, y cualquier posible acción de recuperación definida no se llevará a cabo. Es crucial capturar y manejar excepciones adecuadamente para escribir programas robustos y prevenir fallos incontrolados.





3. La gestión de recursos es un concepto crucial en la programación. Explica:

* ¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++?

La "adquisición de recursos" en C++ se refiere al proceso de obtener acceso a recursos externos, como memoria dinámica, archivos, conexiones de red, entre otros. En términos más simples, es el acto de reservar o asignar recursos necesarios para que un programa funcione correctamente. En C++, esto implica a menudo el uso de operadores como new para la asignación dinámica de memoria o la apertura de archivos mediante objetos de flujo.
* ¿Por qué es importante y cómo se relaciona con la gestión de excepciones?

La gestión de recursos en C++ es esencial para garantizar la liberación adecuada de recursos adquiridos y prevenir problemas como fugas de memoria. El concepto clave es RAII (Resource Acquisition Is Initialization), que asocia la adquisición y liberación de recursos con el ciclo de vida de un objeto. Los destructores de objetos se encargan de liberar los recursos al salir de ámbito, asegurando una gestión eficiente incluso en presencia de excepciones, lo que mejora la robustez y fiabilidad del programa.


### Índice

PopAi: Better AI with boosted answers. (s. f.). Popai.Pro. Recuperado 9 de noviembre de 2023, de https://www.popai.pro/chat/06a2753e-4849-48d3-923a-79e77f10ecf7

(S. f.). Openai.com. Recuperado 9 de noviembre de 2023, de https://chat.openai.com/c/e25d2824-aa4f-47b2-aa87-3e78f18b40f1

Curso para programar C++; fácil, rápido y paso a paso. (s. f.). Programarya.com. Recuperado 9 de noviembre de 2023, de https://www.programarya.com/Cursos/C++






