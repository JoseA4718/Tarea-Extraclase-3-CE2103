## Tarea Extraclase 3 CE2103

### Para probar los tres algoritmos de detección y corrección de errores, solamente es necesario ejecutar el `main.cpp` del repositorio.

## Ejecución del CRC

El código ejecutará el algoritmo CRC el cual pide como parámetros un byte en formato de string, y un polinomio binario que sea divisor del byte. El programa retorna el mensaje que se quiere mandar con la "trama" añadida al final. Como podemos recordar si dividimos el mensaje con la trama añadida entre el polinomio este debe dar 0, asi que el mensaje recibido si se divide entre el mismo polinomio y da 0 es que no hubo error. De otra manera, si da diferente de 000, ocurrió un error en la trasmisión del mensaje.  

Para cambiar el mensaje que se quiere enviar y el polinomio divisor, simplemente se debe cambiar el valor de los parámetros de la linea 9 del `main.cpp` por ejemplo de la siguiente manera: `CRC_Run("10011101","1001");` Una vez ejecutado se verá en la consola el valor de la "trama" y del mensaje enviado.

## Ejecución del Parity Check

El parity check es un método de detección de errores muy básica y con porcentaje de detección no muy eficiente. Pues revisa si la cantidad de 1s en el mensaje enviado es par o impar, y la compara con el mensaje recibido si es par o impar. Si no coinciden es porque se encontró un error. Para la ejecución de este algoritmo se creó un método que cuenta la cantidad de 1s en el byte recibido, devuelve el tipo de paridad, y el valor que debe tomar el bit de paridad para un envio de un bloque de datos. Para cambiar el valor del byte a revisar, simplemente se tiene que cambiar el parámetro de la llamada al método en la linea 12 del `main.cpp` de la siguiente manera: `ParityNum("10011100")`.

## Ejecución del Código Hamming

Para ejecutar este algoritmo, simplemente se ejecuta el `main.cpp` una vez el código genere el CRC y el Parity Check, se mostrará en la consola un mensaje que pide la cantidad de bits que tendrá el mensaje a revisar utilizando Hamming, para esto solamente se escribe el numero de bits que tendrá el mensaje y se le da enter. Inmediatamente aparecerá otro mensaje en la consola pidiendo el valor del byte a revisar, para eso se debe escribir cada bit y luego dar enter hasta cumplir con la cantidad de bits que se especificaron en la primera pregunta. Una vez completado, el sistema generará el código Hamming el cual es una fila extra que se envía junto al mensaje para futura verificación y correción de errores. 

Ejemplo de cómo interactuar con la consola para generar el Hamming code: 


![](https://cdn.discordapp.com/attachments/829035992684953654/853073258373972018/unknown.png)
