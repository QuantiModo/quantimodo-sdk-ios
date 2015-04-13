#import "SWGPairsApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGPairs.h"



@implementation SWGPairsApi
static NSString * basePath = @"https://localhost/api";

+(SWGPairsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGPairsApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGPairsApi alloc] init];
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


-(NSNumber*) pairsGetWithCompletionBlock: (NSString*) cause
         effect: (NSString*) effect
         duration: (NSString*) duration
         delay: (NSString*) delay
         startTime: (NSString*) startTime
         endTime: (NSString*) endTime
         causeSource: (NSString*) causeSource
         effectSource: (NSString*) effectSource
         causeUnit: (NSString*) causeUnit
         effectUnit: (NSString*) effectUnit
        
        
        completionHandler: (void (^)(NSError* error))completionBlock {

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/pairs", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSArray* requestContentTypes = @[];
    NSString* requestContentType = [requestContentTypes count] > 0 ? requestContentTypes[0] : @"application/json";

    NSArray* responseContentTypes = @[@"application/json"];
    NSString* responseContentType = [responseContentTypes count] > 0 ? responseContentTypes[0] : @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(cause != nil) {
        
        queryParams[@"cause"] = cause;
    }
    if(effect != nil) {
        
        queryParams[@"effect"] = effect;
    }
    if(duration != nil) {
        
        queryParams[@"duration"] = duration;
    }
    if(delay != nil) {
        
        queryParams[@"delay"] = delay;
    }
    if(startTime != nil) {
        
        queryParams[@"startTime"] = startTime;
    }
    if(endTime != nil) {
        
        queryParams[@"endTime"] = endTime;
    }
    if(causeSource != nil) {
        
        queryParams[@"causeSource"] = causeSource;
    }
    if(effectSource != nil) {
        
        queryParams[@"effectSource"] = effectSource;
    }
    if(causeUnit != nil) {
        
        queryParams[@"causeUnit"] = causeUnit;
    }
    if(effectUnit != nil) {
        
        queryParams[@"effectUnit"] = effectUnit;
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
