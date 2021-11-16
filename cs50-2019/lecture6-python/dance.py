import qrcode

image = qrcode.make("https://www.youtube.com/watch?v=OC6AFSZLtnk")
image.save("dance.png","PNG")

