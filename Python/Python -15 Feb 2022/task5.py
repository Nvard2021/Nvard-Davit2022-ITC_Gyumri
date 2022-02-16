def email_to_username(*argc):

    for i in argc:
        print(i.split("@")[0])

email_to_username("username@companyname.com", "username2@companyname.com", "username3@companyname.com")
