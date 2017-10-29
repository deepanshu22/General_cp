#import urllib3
import facebook

app_id = "1257325031043360"
app_secret = "d69346c2e19e86af6756e956906ca2fa"

accesstoken = app_id + "|" + app_secret


#oauth_access_token = urlparse.parses_qs(str())
#graph = facebook.GraphAPI(access_token=accesstoken,version = '2.7')
graph  = facebook.GraphAPI('EAACEdEose0cBANiySeFYoPaHp7nFXcDYFoaxfSp3yEZAmO2levpqn3s4wfGdSzS3JN4Bu08KvKnqNITFRda280LSFFT7CTDqfPkHekp7IgyclFk2LtXxcRWbhf54fEw5RQXwx4ASJLdhNjPpemMZCZCfHbW4auyfAkdTwiMW4EXOEIs9nLH16BEKmtH8yEZD')
#post = graph.get_object(id='5281959998')
#friends = graph.get_connections(id ='me',connection_name = 'friends')
#print(post)
#print(friends)
users =  graph.search(type ='user', q = 'Deepanshu Dabas')

print(users)
for user in users['data']:
	print('%s %s '%(user['id'],user['name'].encode()))

