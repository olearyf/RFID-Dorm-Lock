# RFID-Dorm-Lock
## About
This repo stores the code/3D object files for the RFID accessible door lock attachment I made for my dorm room at Purdue. I did this because the current system is that I need to carry around my ID and a physical key, which makes activities like going for a run hard because I have to carry both items(it doesn't seem like a big deal, but I swear it's annoying). This way, I only have to carry my ID.
The system uses an Arduino that is connected to an RFID reader and a servo motor. Once the RFID reader detects my or my roommates UID, it triggers the servo which is connected to a 3D printed mount that rests on our door lock so it can turn the deadbolt.
## Set Up
1. Get an Ardunio(or a knock-off, what ever floats your boat), I used [this one](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU/ref=sr_1_2_sspa?keywords=elegoo+uno&qid=1569367724&s=gateway&sr=8-2-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUE4SDhLSTNQSVE1TTgmZW5jcnlwdGVkSWQ9QTEwMTYxODhEMTNTRktGRlg5UlomZW5jcnlwdGVkQWRJZD1BMDQyODI2MTNEQ1o0S0FPRlpOR0Qmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl)
2. Get a [servo](https://www.amazon.com/gp/product/B07C5PGD3Q/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)
3. Get a [RFID reader](https://www.amazon.com/gp/product/B07KGBJ9VG/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1)
4. [Other misc item(s)](https://www.amazon.com/gp/product/B07GD2BWPY/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1)
5. Download the libraries for the servo and RFID reader you're using
6. Modify the mounts so they fit your door, and 3D print them
7. Fidget with it until it works(mine currently sits on 2 cardboard risers because I made my mount too short)
### See it in action [here](https://drive.google.com/open?id=1x7A88YEQElOnjG9Sguj4PnWPygoh98-k)
