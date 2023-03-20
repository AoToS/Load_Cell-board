#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

const char* ssid = "GP";
const char* password = "12345678";

WiFiServer server(80);

void setup() {
    Serial.begin(115200);

    
    delay(10);

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");

    server.begin();
    Serial.println("Server started");
}

void loop() {
    WiFiClient client = server.available();
    if (!client) {
        return;
    }

    Serial.println("New client");
    while (!client.available()) {
        delay(1);
    }

    String request = client.readStringUntil('\r');
    Serial.println(request);
    client.flush();

    String response = "Hello World!";
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("Connection: close");
    client.println();
    client.println(response);

    Serial.println("Client disconnected");
}
