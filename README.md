# Wi-ATTACK 3.0

![Screenshot_2025-03-26-13-46-47-024_com miui gallery](https://github.com/user-attachments/assets/89a5eace-7fa9-4160-8e13-fcc354692c6d)

This is a **powerful esp8266 based wifi penetration tool library** with a variety of features starting from **deauthentication**, **beacon spamming**, **probe requests**, **realtime wifi authentication monitoring**, **wifi scanning**, **packet monitoring** and much more. This project has a powerful **Command Line Interface(CLI)** and can be controlled via serial monitor.

***Disclaimer**:This is a tool for educational purposes this is neither good nor bad, it depends on how you use this tool*

---

## 🛠️ Features  

🔹 **Wi-Fi Scanning** – Detect nearby networks with detailed info  
🔹 **Deauthentication Attacks** – Disconnect clients from networks  
🔹 **Packet Sniffing** – Intercept and analyze wireless packets  
🔹 **Beacon Spamming** – Create fake APs to test security  
🔹 **Monitor Authentications** – Detect login attempts and handshakes  
🔹 **Probe Requests** – Track devices searching for networks  

---

## 📥 Downloading the `.bin` File  

Before installing **Wi-ATTACK**, download the latest firmware:  

1. **Go to my releases page:**  
   - [Wi-ATTACK Releases](https://github.com/zacode123/Wi-ATTACK/releases)  
2. **Download the latest `.bin` file:**  
   - Find the latest release.  
   - Click on the `.bin` file to start the download.  
3. **Save it to an accessible location** (e.g., Desktop, Downloads folder).  

---

## 🔥 Installation Guide  

### 🖥️ Using ESP8266loader (For Android)  
1. Download **ESP8266Flasher** from [here](https://www.google.com/url?sa=t&source=web&rct=j&opi=89978449&url=https://play.google.com/store/apps/details%3Fid%3Dcom.bluino.esploader%26hl%3Den%26referrer%3Dutm_source%253Dgoogle%2526utm_medium%253Dorganic%2526utm_term%253Desp8266loader%26pcampaignid%3DAPPU_1_VpbiZ6-WGNPH4-EPyvPOkA0&ved=2ahUKEwivmd-Tk6WMAxXT4zgGHcq5E9IQ5YQBegQICxAC&sqi=2&usg=AOvVaw2gEtRJ2X7cBtw7GB4ChkNX).  
2. Connect your ESP8266 to your device.  
3. Open **ESP8266loader** app and select the downloaded `.bin` file.  
5. Click **Upload** button and wait for the process to complete.  

---

### 🛠️ Using esptool (Windows, Linux, Mac)  
1. Install **esptool** using:  
   ```sh
   pip install esptool
   ```
2. Connect your ESP8266 to your computer.


3. Flash the firmware with:
   ```sh
    esptool.py -p <PORT> -b 115200 write_flash 0 <BIN_FILE>
   ```
    Replace <PORT> with your ESP8266’s serial port.

    Replace <BIN_FILE> with the path to the downloaded `.bin` file.


---

🖥️ Using NodeMCU Flasher (Windows Only)

1. Download NodeMCU Flasher from [here](https://github.com/nodemcu/nodemcu-flasher).


2. Open NodeMCU Flasher.exe and select the correct COM port.


3. Click on the Config tab and select the downloaded `.bin` file.


4. Go back to the Operation tab and click Flash.


5. Wait for the flashing process to complete.

---



📝 License

This software is licensed under the MIT License. See the LICENSE file for details.
