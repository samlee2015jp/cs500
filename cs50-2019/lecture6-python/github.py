import qrcode

image = qrcode.make("https://github.com/samlee2015jp/")
image.save("github.png","PNG")

