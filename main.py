from serial import Serial
from time import sleep

portal = Serial('COM6', 9600)
sleep(1.6)

for status in __import__('sys').argv[1].split(','):
    portal.write(bytes(status, 'utf-8'))
    sleep(1)
