#import "SWGUnitsApi.h"
#import "SWGFile.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGUnitCategory.h"
#import "SWGUnit.h"



@implementation SWGUnitsApi
static NSString * basePath = @"https://localhost/api";

+(SWGUnitsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {
    static SWGUnitsApi* singletonAPI = nil;

    if (singletonAPI == nil) {
        singletonAPI = [[SWGUnitsApi alloc] init];
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


-(NSNumber*) unitCategoriesGetWithCompletionBlock: 
        
        (void (^)(NSError* error))completionBlock {

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/unitCategories", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSArray* requestContentTypes = @[];
    NSString* requestContentType = [requestContentTypes count] > 0 ? requestContentTypes[0] : @"application/json";

    NSArray* responseContentTypes = @[@"application/json"];
    NSString* responseContentType = [responseContentTypes count] > 0 ? responseContentTypes[0] : @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
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

-(NSNumber*) unitsGetWithCompletionBlock: (NSString*) unitName
         abbreviatedUnitName: (NSString*) abbreviatedUnitName
         categoryName: (NSString*) categoryName
        
        
        completionHandler: (void (^)(NSError* error))completionBlock {

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/units", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSArray* requestContentTypes = @[];
    NSString* requestContentType = [requestContentTypes count] > 0 ? requestContentTypes[0] : @"application/json";

    NSArray* responseContentTypes = @[@"application/json"];
    NSString* responseContentType = [responseContentTypes count] > 0 ? responseContentTypes[0] : @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(unitName != nil) {
        
        queryParams[@"unitName"] = unitName;
    }
    if(abbreviatedUnitName != nil) {
        
        queryParams[@"abbreviatedUnitName"] = abbreviatedUnitName;
    }
    if(categoryName != nil) {
        
        queryParams[@"categoryName"] = categoryName;
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

-(NSNumber*) unitsVariableGetWithCompletionBlock: (NSString*) variable
         unitName: (NSString*) unitName
         cabbreviatedUnitName: (NSString*) cabbreviatedUnitName
         categoryName: (NSString*) categoryName
        
        
        completionHandler: (void (^)(NSError* error))completionBlock {

    NSMutableString* requestUrl = [NSMutableString stringWithFormat:@"%@/unitsVariable", basePath];

    // remove format in URL if needed
    if ([requestUrl rangeOfString:@".{format}"].location != NSNotFound)
        [requestUrl replaceCharactersInRange: [requestUrl rangeOfString:@".{format}"] withString:@".json"];

    

    NSArray* requestContentTypes = @[];
    NSString* requestContentType = [requestContentTypes count] > 0 ? requestContentTypes[0] : @"application/json";

    NSArray* responseContentTypes = @[@"application/json"];
    NSString* responseContentType = [responseContentTypes count] > 0 ? responseContentTypes[0] : @"application/json";

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if(variable != nil) {
        
        queryParams[@"variable"] = variable;
    }
    if(unitName != nil) {
        
        queryParams[@"unitName"] = unitName;
    }
    if(cabbreviatedUnitName != nil) {
        
        queryParams[@"cabbreviatedUnitName"] = cabbreviatedUnitName;
    }
    if(categoryName != nil) {
        
        queryParams[@"categoryName"] = categoryName;
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
