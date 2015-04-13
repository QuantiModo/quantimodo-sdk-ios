#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGConnector
@end
  
@interface SWGConnector : SWGObject

/* Connector ID number 
 */
@property(nonatomic) NSNumber* _id;
/* Connector lowercase system name 
 */
@property(nonatomic) NSString* name;
/* Connector pretty display name 
 */
@property(nonatomic) NSString* displayName;
/* URL to the image of the connector logo 
 */
@property(nonatomic) NSString* image;
/* URL to a site where one can get this device or application 
 */
@property(nonatomic) NSString* getItUrl;
/* True if the authenticated user has this connector enabled 
 */
@property(nonatomic) NSString* connected;
/* URL and parameters used when connecting to a service 
 */
@property(nonatomic) NSString* connectInstructions;
/* Epoch timestamp of last sync 
 */
@property(nonatomic) NSNumber* lastUpdate;
/* Number of measurements obtained during latest update 
 */
@property(nonatomic) NSNumber* latestData;
/* True if user has no measurements for this connector 
 */
@property(nonatomic) NSNumber* noDataYet;

@end
