# forest-fire-forecasting

The code is an automated code that read data from temperature sensor every 1 second. Then, it calculates the accumulation and the average of the temperature every 5 seconds. Using these data, we can predict if there is a fire or not.

## Code Execution Command

To execute the main code

```
g++ -pthread main.cpp FireForcastingClientBase.cpp FireForcastingClientTerminalOutput.cpp FireForcastingClientSocketOutput.cpp
```
If the socket code will be used, the SocketClient must be executed
```
g++ SocketClient.cpp -o SocketClient.out
./SocketClient.out
```
## UML Diagram

![maui](https://github.com/karim19mohamed/forest-fire-forecasting/blob/main/img/UML_Diagram.png)

The Main base class is FireForcastingClientBase. It is flexible that any class can inherit from it and modify the way that the client use to observe the results.

### FireForcastingClientBase

This Class reads temperature using ```readTemperature()``` function. After every 5 readings, the average and accumalation is calculated through ```calculateAccumlation()``` and ```calculateAverage()```. These functions is designed to work in parallel threads. whenever there is a result, the ```client()``` run.

The ```client()``` is designed to be pure virtual so that:

* It can be polymerized to support any kind of method to observe the result such as terminal output and socket output.
* No inherited function will work unless the ```client()``` is defined.

### FireForcastingClientSocketOutput

This class inherits from ```FireForcastingClientBase``` class and print the average and the accumulation into the terminal. 

### FireForcastingClientTerminalOutput

This class inherits from ```FireForcastingClientBase``` class and use socket programming to send the data to another device in the local network. To observe the results, ```SocketClient.cpp``` is used. 
