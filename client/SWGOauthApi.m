#import "SWGOauthApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"



@implementation SWGOauthApi
static NSString * basePath = @"https://localhost/api";

+(SWGOauthApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGOauthApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGOauthApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(void) setBasePath:(NSString*)path {
    basePath = path;
}

+(NSString*) getBasePath {
    return basePath;
}

-(SWGApiClient*) apiClient {
    return [SWGApiClient sharedClientFromPool:basePath];
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [[self apiClient] setHeaderValue:value forKey:key];
}

-(id) init {
    self = [super init];
    [self apiClient];
    return self;
}

-(void) setHeaderValue:(NSString*) value
           forKey:(NSString*)key {
    [[self apiClient] setHeaderValue:value forKey:key];
}

-(unsigned long) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}


-(NSNumber*) oauth2AuthorizeGetWithCompletionBlock: (NSString*) response_type
         redirect_uri: (NSString*) redirect_uri
         realm: (NSString*) realm
         client_id: (NSString*) client_id
         scope: (NSString*) scope
         state: (NSString*) state
        
        
        completionHandler: (void (^)(NSError* error))completionBlock {

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/oauth2/authorize", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSArray* requestContentTypes = @[];
    NSString* requestContentType = [requestContentTypes count] > 0 ? requestContentTypes[0] : @"application/json";

    NSArray* responseContentTypes = @[@"application/json"];
    NSString* responseContentType = [responseContentTypes count] > 0 ? responseContentTypes[0] : @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(response_type != nil) {
        
        queryParams[@"response_type"] = response_type;
    }
    if(redirect_uri != nil) {
        
        queryParams[@"redirect_uri"] = redirect_uri;
    }
    if(realm != nil) {
        
        queryParams[@"realm"] = realm;
    }
    if(client_id != nil) {
        
        queryParams[@"client_id"] = client_id;
    }
    if(scope != nil) {
        
        queryParams[@"scope"] = scope;
    }
    if(state != nil) {
        
        queryParams[@"state"] = state;
    }
    
    NSMutableDictionary* headerParams = [[NSMutableDictionary alloc] init];
    

    id bodyDictionary = nil;
    
    

    NSMutableDictionary * formParams = [[NSMutableDictionary alloc]init];

    
    

    

    SWGApiClient* client = [SWGApiClient sharedClientFromPool:basePath];

    

    

    
    // it's void
        return [client stringWithCompletionBlock: requestUrl 
                                      method: @"GET" 
                                 queryParams: queryParams 
                                        body: bodyDictionary 
                                headerParams: headerParams
                          requestContentType: requestContentType
                         responseContentType: responseContentType
                             completionBlock: ^(NSString *data, NSError *error) {
                if (error) {
                    completionBlock(error);
                    return;
                }
                completionBlock(nil);
                    }];

    
}



@end
