#import <Foundation/Foundation.h>
#import "SWGConnector.h"
#import "SWGObject.h"


@interface SWGConnectorsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGConnectorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 List of Connectors
 Returns a list of all available connectors. A connector pulls data from other data providers using their API or a screenscraper.

 

 return type: NSArray<SWGConnector>*
 */
-(NSNumber*) connectorsListGetWithCompletionBlock :
    (void (^)(NSArray<SWGConnector>* output, NSError* error))completionBlock;
    


/**

 Obtain a token from 3rd party data source
 The `connect` method tells it to attempt to obtain a token from the data provider, store it in `connect`.`credentials`, allowing the connector to obtain user data.

 @param connector Lowercase system name of the source application or device
 

 return type: 
 */
-(NSNumber*) connectorsConnectorConnectGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get connection parameters
 The `connectInstructions` method returns instructions that describe what parameters and endpoint to use to connect to the given data provider.

 @param connector Lowercase system name of the source application or device
 

 return type: 
 */
-(NSNumber*) connectorsConnectorConnectInstructionsGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Delete stored connection info
 The `disconnect` method deletes any stored tokens or connection information from the `connectors` database.

 @param connector Lowercase system name of the source application or device
 

 return type: 
 */
-(NSNumber*) connectorsConnectorDisconnectGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Get connector info for user
 The `info` method returns information about the connector such as the connector id, whether or not is connected (i.e. we have a token in the `connector`.`credentials` table, and the update history from the `connector`.`updates` table.)

 @param connector Lowercase system name of the source application or device
 

 return type: 
 */
-(NSNumber*) connectorsConnectorInfoGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


/**

 Sync with data source
 The `update` method tells the QM Connector Framework to check with the data provider (such as Fitbit or MyFitnessPal) and put any new data in the `quantimodo`.`measurements` table.

 @param connector Lowercase system name of the source application or device
 

 return type: 
 */
-(NSNumber*) connectorsConnectorUpdateGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end