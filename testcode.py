import cv2
from modules.basic import get_user
from modules.basic import loadimage
#call funtions
username = get_user()




#load image
image = loadimage(rf'C:\Users\{username}\Desktop\input.png')




def run():
    cv2.imshow('test', image)
    cv2.waitKey()
    
    
#running application
if __name__ == "__main__":
    run()