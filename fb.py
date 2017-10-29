import urllib2 , urllib
import json
import datetime
import csv
import time

app_id = "1257325031043360"
app_secret = "d69346c2e19e86af6756e956906ca2fa"

#access_token = app_id + "|" + app_secret
access_token = "EAACEdEose0cBAPdPsi8jBbfX4CQtMfHezAGSCN4mpJ6RjqqsFZBZBgL6L3wPZA65hTZBHzmKZB8vGDu1akIbvUMDXOGh7dVjj3MG9tro1ant6HRwnfdtz0EAmTcTwZBfqsZBQAREsKllQ5RkZAdZAV3MCiEEoF7C9CLZCsAdgMDEPAqhhPznCeaO62ojuF3qWLXiUZD"
page_id = 5281959998

def request_until(url):
	req = urllib2.Request(url)
	success = False
	while success is False:
		try:
			response = urllib2.urlopen(req)
			if response.getcode() == 200:
				success = True
		except Exception, e:
			print e
			time.sleep(5)

			print "Error for URL %s:%s"%(url,datetime.datetime.now())
			print "Retrying"

	return response.read()

	

def testFacebookPageData(page_id,access_token,num_stat):
 base = "https://graph.facebook.com/v2.9"
 node = "/%s/posts"  % page_id
 #q = urllib.qoute(access_token)

 fields = "/?fields=message,link,permalink_url,created_time,type,name,id," + \
            "comments.limit(0).summary(true),shares,reactions" + \
            ".limit(0).summary(true)"
 parameters = "&limit=%s&access_token = %s" % (num_stat,access_token)            
 url = base + node + fields + parameters
 data = json.loads(request_until(url))
 #response = urllib2.urlopen(req)
 print data
 return data
# print json.dumps(data,indent=4,sort_keys=True)
 
testFacebookPageData(page_id,access_token,100)