Redneck H-Bridge, revision B1 README
------------------------------------------------------------------------------------------------------------------

This H-Bridge is NOT an example of a good design - it is an example of:

    Designing using parts from your parts box - all but the N-FETS(NXP PSMN02230PL) were from my parts box
    
    Minimalistic design - replacing the '324 with a comparitor would not only hae required a comparitor
        , which I dont have in my parts box, but also a '74 or '40 series buffer, because most comparitor outputs
        are open-collector
    
    A design done for the porpose of learning - I could have used manu different off-the-shelf soloutions with
        only a small reduction of effency, or I could have used a P-FET for the high side, but I wanted the
        experience of building a hbridge with n-channel high-side devices

Nevertheless, the design, or at least the earlier, electrically equivilent revision that I have built, does work, and does so with reasonably good efficency. Pwm support is limited to very low frequencies, but with a 7.2v supply, thisis not a huge issue. If you choose to build this design, beware the following issues:

    Pwm is low-speed (<1khz) only, high speed pwm will just make the motor coast- it probably will not damage the
       driver
    
    The supply voltage range is quite narrow, at least with the provided voltage doubler. Safe opperation can 
        be had between 6 and 9 volts with the PSMN02230PL
    
    !!!No undervoltage/overvoltage lockout is implimented!!!
        Voltage lower or higher then the 6-9 volt range WILL damage the driver!

A more robust/pwm-capible version is comming soon.
