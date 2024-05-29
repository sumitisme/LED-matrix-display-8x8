# LED-matrix-display-8x8
THE CODE SUCKS. I JUST WANTED THE DISPLAY TO WORK AND NOTHING MORE. THERE WERE TONS OF WAYS WHERE IT COULD HAVE BEEN BETTER. I TOOK BAD STEPS AND I AM AWARE! Many parts of the code gets repeated, there is a lot of debugging to do and I could have just use the bitshift operators (>> and <<) for the rows. I didn't choose to do it for some reason so the code sucks. I don't recommend you look at it at all haha. <br><br> 
This is the code and the general description for an LED matrix project I personally have been working in. The project is yet to be completed and I intend to add more to it. The code is amateur-esque as I have near none experience on arduino currently. I was interested in the project and picked up the idea.

# The Incomplete project on hardware
<img src = "img/project image.jpg">

# The First semi working project on hardware
<img src = "img/project image3.jpg">
<p>Here one of the columns is dead. This was because of the terrible soldering. I hope to manage it at some point in the coming month</p>
<br>
<img src = "img/S test 1.jpg">
<p>This is printing the letter S but since one of the columns is dead along with another one pixel, it looks odd. It should be showing S</p>

## The FINAL working model (showing the character S)
<img src = "img/final project.jpg">
<p>This is the final product after fixing most things. Some of the lEDs are dead and I haven't used resistors, so the life of the LEDs won't be very good. But the project is done!</p>

# The Complete circuit on breadboard
<img src = "img/circuit on breadboard.jpg">
<p>The Circuit looks messy but it was fun to work with! The project was for me to learn about something new and this genuinely satisfies me.</p>

# The Schematic for the project
<img src = "img/Schematic update1.jpg">

# Parts used
* bc547 transistors * 8 (I had initially used 2n2222a but decided to switch since bc547 was cheaper and easier to find)
* A bunch of M-to-M jumper wires. (around 50)
* 74HC595 Shift resistors * 2
* Breadboard * 2
* Perf board * 1
* Red LEDs * 64
* Arduino UNO R3 * 1
* 1kOhm resistor * 8
* Solder

# Software used
* Arduino IDE
* Proteus 8 professional

# Team members
* Sumit Poudel

# THE VIDEO FOR THE PROJECT 
https://github.com/sumitisme/LED-matrix-display-8x8/assets/142044183/12386940-07e0-472a-889f-2b971ad9e4eb

