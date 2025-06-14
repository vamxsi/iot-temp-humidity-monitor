// Include the DHT sensor library
#include "DHT.h"

// Define the pin the DHT22 data pin is connected to
#define DHTPIN 2

// Define the type of DHT sensor we are using (DHT22)
#define DHTTYPE DHT22

// Initialize the DHT sensor object
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Start serial communication at 9600 bits per second
  Serial.begin(9600);
  Serial.println("DHT22 Test: Temperature & Humidity Monitor");

  // Initialize the sensor
  dht.begin();
}

void loop() {
  // Wait a couple of seconds between measurements
  delay(2000);

  // Read humidity from the sensor
  float humidity = dht.readHumidity();
  // Read temperature in Celsius
  float temperature = dht.readTemperature();

  // Check if any reads failed and exit early to try again
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print the readings to the Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%  |  ");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
}
