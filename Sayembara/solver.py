import cv2
import os

from cv2 import QRCodeDetector
f = open('hasil.txt','a+')
directory = 'POSTTEST'
i = 0

file = os.scandir(directory)
file = list(map(str, file))
file = [x[11:-2] for x in file]

for filename in file:
    print(str(filename))
    img = cv2.imread('POSTTEST/' + filename)
    qr = QRCodeDetector()
    data, _ , _  = qr.detectAndDecode(img)
    i += 1
    print(str(i) +" "+ data)
    if len(data) == 0:
        f.write('\n')
    else:
        f.write(data + '\n')   
  


