import sys;

URL = "git@github.com:EpitechPromo2026/" + sys.argv[1].split("/")[1] + ".git"
sys.stdout.write("mirror_url=" + URL)
