# Oauth Client for RRM Platforms
This is a heavily simplified implementation of an Oauth client for RRM platforms. It only handles the 'Client Credentials' 
grant type which is the simplest form of Oauth. This is meant as a base for the API automation of various RRM platforms.
This was made for small IT companies and is thus built for Windows devices as that's what most IT companies use 
(as far as I'm aware).

### Requirements
#### For using the .exe:
- Windows device.
- Must have a 'Client App' created in your respective RRM platform. (steps on this provided)
- Internet connection.

#### For development: 
- Windows Device
- Visual Studio Community/2022 (As the compiler)

### Using the exe (Example covers both NinjaOne and Zoho)
	
1. Create a client app in your RRM platofrm. In NinjaOne, select 'API Services' | in Zoho select 'Self Client'.

2. In the root of this repo, create a 'client_credentials.txt' file and populate it with the required fields from your client app.

3. Run the 'oauth_client.exe' application in the root of this repo.

4. When prompted, enter the exact platform name you used ('ninjaone' in the example txt) and enjoy your access token.

#### NOTES
```
- For some platforms (such as NinjaOne), you will need to enable the 'Client Credentials' grant type for your client app.
- a 'client_credentials_EXAMPLE.txt' has been provided for reference.
- Although this project only works with the 'Client Credentials' grant type, a grant type field must still be provided in the txt file as some platforms may
  differ in the exact name of the field. E.g. 'grant_type' vs 'oauth_grant_type' etc...
- This has only been tested with NinjaOne and Zoho. Though if your RRM just requires posting 
  some client app credentials to an endpoint, this will work.
```

### Development (Steps align with Visual Studio Community)

1. Open Visual Studio and select "Open a project or solution".

2. Navigate to this repo and select the 'oauth_client.slnx' file.

3. In File Explorer, copy your client_credentials.txt file to /oauth_cleint/oauth_client/.

Note: This ensures that the file is found when running the code from the IDE debugger.
DON'T WORRY! .gitignore is set to ignore your file here already!

4. In Visual Studio, under the Solution Explorerer, open 'Source Files' and open 'oauth_client.cpp'.
(It's there, trust me)
