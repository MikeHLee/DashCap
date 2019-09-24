import serial
import time
import subprocess


ser = serial.Serial('/dev/ttyACM0',9600)
line = 0


def main():
	while 1:
		listen()

def show_image1():
	print 'show image 1'
	subprocess.call('bash display_image.sh haveanawesomeday.jpg', shell=True)

def show_image2():
        print 'show image 2'
	subprocess.call('bash display_image.sh letmein.jpg', shell=True)

def show_image3():
        print 'show image 3'
	subprocess.call('bash display_image.sh backoff.jpg', shell=True)

def show_image4():
        print 'show image 4'
	subprocess.call('bash display_image.sh sorry.jpg', shell=True)

def show_image5():
        print 'show image 5'
	subprocess.call('bash display_image.sh fuckyou2.jpg', shell=True)

def listen():
	global line,ser
	if(ser.in_waiting >0):
	    line = str.strip(ser.readline())
	    if(line == '1'):
		show_image1()
	    if(line == '2'):
                show_image2()
	    if(line == '3'):
                show_image3()
	    if(line == '4'):
                show_image4()
	    if(line == '5'):
                show_image5()
	    ser.reset_input_buffer()

main()
