import DiscordRPC
import time
import subprocess

user = subprocess.run("whoami", shell=True, capture_output=True, check=True)
host = subprocess.run("uname -n", shell=True, capture_output=True, check=True)

user = user.stdout.decode('utf-8').replace("\n", "")
host = host.stdout.decode('utf-8')

time.sleep(4)

while True:
    try:
        rpc = DiscordRPC.RPC.Set_ID(app_id=1133070138602700810)
        
        while True:
            uptime = subprocess.run("uptime -p", shell=True, capture_output=True, check=True)
            uptime = uptime.stdout.decode('utf-8')
            rpc.set_activity(
                state = uptime,
                details = user+"@"+host,
                large_image = "arch",
                small_image = "linux",
                small_text = "linux"
            )
            time.sleep(8)
    except:
        print("discord disabled, sleeping")
        time.sleep(16)
        continue
