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
