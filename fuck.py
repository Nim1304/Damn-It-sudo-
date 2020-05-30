
# out = subprocess.run(["history","|","tail","-2","|","head","-1","|","cut","-c8-999"]);
# history | tail -2 | head -1 | cut -c8-999
# out = subprocess.check_output(["bash","-c","history | tail -2 | head -1 | cut -c8-999"])
# print(out)

# import readline
# for i in range(readline.get_current_history_length()):
#     print (readline.get_history_item(i + 1))

# os.system("history | tail -2 | head -1 | cut -c8-999");


from subprocess import Popen, PIPE, STDOUT
# shell_command = 'bash -i -c "history"'
# event = Popen(shell_command, shell=True, stdin=PIPE, stdout=PIPE, 
#     stderr=STDOUT)

# output = event.communicate()


print(Popen(["bash", "-c", "history | tail -2 | head -1 | cut -c8-999"]).communicate())
