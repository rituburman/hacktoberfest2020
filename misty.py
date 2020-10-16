'''
Misty will be our mate who retrieves tweets from home
ofcourse! We will specify the limit
'''

import tweepy
from tweepy import OAuthHandler
handle=open('tweets.txt','w')
# variables for keys
consumerKey = '<consumerkey>'
consumerSecret = '<consumersecret>'
accessToken = '<access tokens>'
accessSecret = '<access secret>'
auth = tweepy.OAuthHandler(consumerKey, consumerSecret)
auth.set_access_token(accessToken, accessSecret)
api = tweepy.API(auth)
for status in tweepy.Cursor(api.home_timeline).items(100):
    # Process a single status
    print (status.text)
    handle.write(status.text.encode('utf-8'))
    handle.write('\n \n')
handle.close()
