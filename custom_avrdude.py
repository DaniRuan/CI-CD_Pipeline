Import("env", "projenv")

#
# Upload actions
#

def before_upload(source, target, env):
	print("Uploader flags before change:")
	old_flags = env["UPLOADERFLAGS"]
	print(old_flags)
	# replace the avrdude.conf entry with another path
	# create new list of flags
	new_flags = []
	new_config = "C:\\Users\\danny\\.platformio\\packages\\tool-avrdude\\avrdude.conf"
	for entry in old_flags:
		if "avrdude.conf" in entry:
			new_flags.append(new_config)
		# copy over the old entry unmodified
		else:
			new_flags.append(entry) 
	# replace old flags in the environment.
	env.Replace(UPLOADERFLAGS = new_flags)
	print("New uplaod flags:")
	print(env["UPLOADERFLAGS"])

# register pre-upload action	
env.AddPreAction("upload", before_upload)
