# users=['admin','adman','admen','admon','admmn']
users=[]
if users:
    for user in users:
        if 'admin' == user:
            print(f'hello {user},would you like to see a status report?')
        else:
            print(f'hello {user.title()},thank you for logging in again')
else:
    print(f'We need to find some uesrs')
