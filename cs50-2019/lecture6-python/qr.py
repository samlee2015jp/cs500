import qrcode

image = qrcode.make("https://youtu.be/oHg%SJYRHA0")
image.save("qr.png","PNG")

