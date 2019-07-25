## Solución Preguntas planteadas Parcial 1.

#Pregunta 1. 

Tiempos observados: 
a)
 Arg de entrada: 1000000
 tiempos: 
  Initial value : 0
  Final value   : 1700541

  real	0m0,555s
  user	0m0,764s
  sys	0m0,340s
  
  Initial value : 0
  Final value   : 1700541

  real	0m0,555s
  user	0m0,764s
  sys	0m0,340s
  
  Initial value : 0
  Final value   : 1700124

  real	0m0,544s
  user	0m0,771s
  sys	0m0,312s


b) 
  Initial value : 0
  Final value   : 2000000

  real	0m0,414s
  user	0m0,471s
  sys	0m0,330s

  Initial value : 0
  Final value   : 2000000

  real	0m0,524s
  user	0m0,648s
  sys	0m0,371s

  Initial value : 0
  Final value   : 2000000

  real	0m0,554s
  user	0m0,630s
  sys	0m0,456s

Para calcular los tiempos decidi usar un comando llamado
"time" el cual me muestra el tiempo de ejecución.

En los tiempos observados y al mostrar el valor final se
puede notar que el valor que da al cerrar la puerta antes
del ciclo será un valor variable pero al ubicar for justo antes de incrementar la variable, esta sera la misma en todas las pruebas, lo cual se puede entender como que esta conservando el hilo en este valor.


#Pregunta 4.

a) El porcentaje del tiempo que la cpu está corriendo es del 100% debido a que el programa especifica que el segundo parámetro pasado a este es la posibilidad de que este se ejecute al 100%.

b)No va a ser del 100% dado que uno se ejecutará usando el 100 % de la cpu pero el otro entrara en proceso I/O y su utilización será de al menos la mitad de este porcentaje.

