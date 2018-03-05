import requests

arr_title = []
arr_count = []

rsp = requests.get("https://news.ycombinator.com/news").content
js = rsp.split('<td align="right" valign="top" class="title">')

for i in range(1, len(js)):
	try:
		title = js[i].split('class="storylink">')[1].split("</a>")[0]
		comment_count = "0"
		comment_count = js[i].split('>hide<')[1].split("&")[0].split('">')[1].split("</a>")[0]
		if comment_count == "discuss":
			comment_count = "0"
	except:
		title = js[i].split('rel="nofollow">')[1].split("</a>")[0]
		

	arr_title.append(title)
	c = 0
	try:
		c = int(comment_count)
	except:
		pass
	arr_count.append(c)

for i in range(len(arr_count)):
	for j in range(len(arr_count)-1,i,-1):
		if(arr_count[j]>arr_count[j-1]):
			arr_count[j],arr_count[j-1] = arr_count[j-1],arr_count[j]
			arr_title[j],arr_title[j-1] = arr_title[j-1],arr_title[j]

for i in range(10,1,-1):
	print str(arr_count[i]) + ": \t" + arr_title[i]
