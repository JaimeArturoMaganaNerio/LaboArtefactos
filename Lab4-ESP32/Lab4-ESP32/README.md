# Laboratorio 4 - Introduccion al ESP32

Programacion de Artefactos - UCA

- Nombre: Jaime Arturo Magana Nerio
- Carnet: 00077320

## Contenido

| Carpeta | Descripcion |
|---|---|
| `PruebaESP32` | Prueba de funcionamiento del ESP32 (Monitor Serial + LED integrado) |
| `TouchPrueba` | Parte 1: lectura del sensor Touch en GPIO4 (T0) |
| `TouchOLED` | Parte 2: integracion del sensor Touch con la pantalla OLED SH1106 |
| `TouchOLED_DosBotones` | Agregado: dos sensores tactiles (GPIO4 y GPIO27) como botones |

## Conexiones

| Componente | ESP32 |
|---|---|
| OLED VCC | 3.3V |
| OLED GND | GND |
| OLED SDA | GPIO21 |
| OLED SCL | GPIO22 |
| Touch 1 | GPIO4 (T0) |
| Touch 2 | GPIO27 (T7) |

## Tabla de resultados - Sensor Touch

| Medicion | Valor aproximado |
|---|---|
| Sin tocar | 1138 |
| Al tocar | 450 |
| Umbral seleccionado | 600 |

El valor leido por `touchRead()` disminuye cuando se toca el cable, por lo que
se considera contacto cuando la lectura es menor que el umbral.

## Umbrales - Dos botones

| Sensor | Umbral |
|---|---|
| Boton 1 (GPIO4) | 650 |
| Boton 2 (GPIO27) | 400 |

## Librerias utilizadas

- Adafruit GFX Library
- Adafruit SH110X
