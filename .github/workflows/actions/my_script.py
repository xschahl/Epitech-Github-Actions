import sys;

URL = sys.argv[2]
if sys.argv[1] == '':
    URL = URL.split("/")[1]
    sys.stdout.write("mirror_url=" + URL)
else:
    sys.stdout.write("mirror_url=" + sys.argv[1])
