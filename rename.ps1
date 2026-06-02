$map = @(
    @{ Old = "01_blinking_led"; New = "01_blinking_led"; OldNum = "01"; NewNum = "01" },
    @{ Old = "02_traffic_light"; New = "02_traffic_light"; OldNum = "02"; NewNum = "02" },
    @{ Old = "03_button_control"; New = "03_button_control"; OldNum = "03"; NewNum = "03" },
    @{ Old = "15_tilt_sensor"; New = "04_tilt_sensor"; OldNum = "15"; NewNum = "04" },
    @{ Old = "14_fading_led"; New = "05_fading_led"; OldNum = "14"; NewNum = "05" },
    @{ Old = "04_analog_potentiometer"; New = "06_analog_potentiometer"; OldNum = "04"; NewNum = "06" },
    @{ Old = "09_photoresistor"; New = "07_photoresistor"; OldNum = "09"; NewNum = "07" },
    @{ Old = "05_ultrasonic_distance"; New = "08_ultrasonic_distance"; OldNum = "05"; NewNum = "08" },
    @{ Old = "17_flame_sensor"; New = "09_flame_sensor"; OldNum = "17"; NewNum = "09" },
    @{ Old = "16_relay_switch"; New = "10_relay_switch"; OldNum = "16"; NewNum = "10" },
    @{ Old = "07_servo_motor"; New = "11_servo_motor"; OldNum = "07"; NewNum = "11" },
    @{ Old = "18_stepper_motor"; New = "12_stepper_motor"; OldNum = "18"; NewNum = "12" },
    @{ Old = "06_lcd_display"; New = "13_lcd_display"; OldNum = "06"; NewNum = "13" },
    @{ Old = "10_rgb_led"; New = "14_rgb_led"; OldNum = "10"; NewNum = "14" },
    @{ Old = "08_passive_buzzer"; New = "15_passive_buzzer"; OldNum = "08"; NewNum = "15" },
    @{ Old = "11_joystick_servo"; New = "16_joystick_servo"; OldNum = "11"; NewNum = "16" },
    @{ Old = "12_keypad_security"; New = "17_keypad_security"; OldNum = "12"; NewNum = "17" },
    @{ Old = "13_lcd_weather_station"; New = "18_lcd_weather_station"; OldNum = "13"; NewNum = "18" }
)

cd "c:\Users\Priyam Prakash\OneDrive\Desktop\Auridino Basics\projects"

# Pass 1: Move to TEMP
foreach ($item in $map) {
    if (Test-Path $item.Old) {
        git mv $item.Old "TEMP_$($item.New)"
    }
}

# Pass 2: Move from TEMP to final, rename internal files, update text
foreach ($item in $map) {
    if (Test-Path "TEMP_$($item.New)") {
        git mv "TEMP_$($item.New)" $item.New
        
        cd $item.New
        
        # Rename .ino
        if (Test-Path "$($item.Old).ino") {
            git mv "$($item.Old).ino" "$($item.New).ino"
        }
        
        # Update README
        if (Test-Path "README.md") {
            $content = Get-Content "README.md" -Raw
            $content = $content -replace "Project $($item.OldNum):", "Project $($item.NewNum):"
            Set-Content -Path "README.md" -Value $content -NoNewline
        }

        # Update .ino
        if (Test-Path "$($item.New).ino") {
            $content = Get-Content "$($item.New).ino" -Raw
            $content = $content -replace "Project $($item.OldNum):", "Project $($item.NewNum):"
            Set-Content -Path "$($item.New).ino" -Value $content -NoNewline
        }
        
        cd ..
    }
}
