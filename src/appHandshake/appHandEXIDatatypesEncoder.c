/*
 * Copyright (C) 2007-2018 Siemens AG
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*******************************************************************
 *
 * @author Daniel.Peintner.EXT@siemens.com
 * @version 0.9.4
 * @contact Richard.Kuntschke@siemens.com
 *
 * <p>Code generated by EXIdizer</p>
 * <p>Schema: V2G_CI_AppProtocol.xsd</p>
 *
 *
 ********************************************************************/




#include "appHandEXIDatatypesEncoder.h"

#include "EncoderChannel.h"
#include "EXIHeaderEncoder.h"

#include "appHandEXIDatatypes.h"
#include "ErrorCodes.h"

#ifndef EXI_appHand_DATATYPES_ENCODER_C
#define EXI_appHand_DATATYPES_ENCODER_C

static int errn;

/* Forward Declarations */
static int encode_appHandAppProtocolType(bitstream_t* stream, struct appHandAppProtocolType* appHandAppProtocolType);
static int encode_appHandAnonType_supportedAppProtocolReq(bitstream_t* stream, struct appHandAnonType_supportedAppProtocolReq* appHandAnonType_supportedAppProtocolReq);
static int encode_appHandAnonType_supportedAppProtocolRes(bitstream_t* stream, struct appHandAnonType_supportedAppProtocolRes* appHandAnonType_supportedAppProtocolRes);



/* Complex type name='urn:iso:15118:2:2010:AppProtocol,AppProtocolType',  base type name='anyType',  content type='ELEMENT',  isAbstract='false',  hasTypeId='false',  final='0',  block='0',  particle='(ProtocolNamespace,VersionNumberMajor,VersionNumberMinor,SchemaID,Priority)',  derivedBy='RESTRICTION'.  */
static int encode_appHandAppProtocolType(bitstream_t* stream, struct appHandAppProtocolType* appHandAppProtocolType) {
	int grammarID = 0;
	int done = 0;
	
	
	while(!done) {
		switch(grammarID) {
		case 0:
			/* FirstStartTag[START_ELEMENT(ProtocolNamespace)] */
			if ( 1 == 1 ) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					/* FirstStartTag[CHARACTERS[STRING]] */
					errn = encodeNBitUnsignedInteger(stream, 1, 0);
					if(errn == 0) {
						/* encode string as string table miss (+2 len)*/
						errn = encodeUnsignedInteger16(stream, (uint16_t)(appHandAppProtocolType->ProtocolNamespace.charactersLen + 2));
						if (errn == 0) {
							errn = encodeCharacters(stream, appHandAppProtocolType->ProtocolNamespace.characters, appHandAppProtocolType->ProtocolNamespace.charactersLen);
						}
						/* valid EE */
						errn = encodeNBitUnsignedInteger(stream, 1, 0);
					}
				}
				grammarID = 1;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 1:
			/* Element[START_ELEMENT(VersionNumberMajor)] */
			if ( 1 == 1 ) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					/* First(xsi:type)StartTag[CHARACTERS[UNSIGNED_INTEGER]] */
					errn = encodeNBitUnsignedInteger(stream, 1, 0);
					if(errn == 0) {
						errn = encodeUnsignedInteger32(stream, appHandAppProtocolType->VersionNumberMajor);
						/* valid EE */
						errn = encodeNBitUnsignedInteger(stream, 1, 0);
					}
				}
				grammarID = 2;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 2:
			/* Element[START_ELEMENT(VersionNumberMinor)] */
			if ( 1 == 1 ) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					/* First(xsi:type)StartTag[CHARACTERS[UNSIGNED_INTEGER]] */
					errn = encodeNBitUnsignedInteger(stream, 1, 0);
					if(errn == 0) {
						errn = encodeUnsignedInteger32(stream, appHandAppProtocolType->VersionNumberMinor);
						/* valid EE */
						errn = encodeNBitUnsignedInteger(stream, 1, 0);
					}
				}
				grammarID = 3;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 3:
			/* Element[START_ELEMENT(SchemaID)] */
			if ( 1 == 1 ) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					/* FirstStartTag[CHARACTERS[NBIT_UNSIGNED_INTEGER]] */
					errn = encodeNBitUnsignedInteger(stream, 1, 0);
					if(errn == 0) {
						errn = encodeNBitUnsignedInteger(stream, 8, (uint32_t)(appHandAppProtocolType->SchemaID - 0));
						/* valid EE */
						errn = encodeNBitUnsignedInteger(stream, 1, 0);
					}
				}
				grammarID = 4;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 4:
			/* Element[START_ELEMENT(Priority)] */
			if ( 1 == 1 ) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					/* FirstStartTag[CHARACTERS[NBIT_UNSIGNED_INTEGER]] */
					errn = encodeNBitUnsignedInteger(stream, 1, 0);
					if(errn == 0) {
						errn = encodeNBitUnsignedInteger(stream, 5, (uint32_t)(appHandAppProtocolType->Priority - 1));
						/* valid EE */
						errn = encodeNBitUnsignedInteger(stream, 1, 0);
					}
				}
				grammarID = 5;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 5:
			/* Element[END_ELEMENT] */
			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		default:
			errn = EXI_ERROR_UNKOWN_GRAMMAR_ID;
			break;
		}
		if(errn) {
			done = 1;
		}
	}
	return errn;
}

/* Complex type name='urn:iso:15118:2:2010:AppProtocol,#AnonType_supportedAppProtocolReq',  base type name='anyType',  content type='ELEMENT',  isAbstract='false',  hasTypeId='false',  final='0',  block='0',  particle='(AppProtocol{1-20})',  derivedBy='RESTRICTION'.  */
static int encode_appHandAnonType_supportedAppProtocolReq(bitstream_t* stream, struct appHandAnonType_supportedAppProtocolReq* appHandAnonType_supportedAppProtocolReq) {
	int grammarID = 7;
	int done = 0;
	
	unsigned int appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex = 0;
	
	while(!done) {
		switch(grammarID) {
		case 7:
			/* FirstStartTag[START_ELEMENT(AppProtocol)] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 8;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 8:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 9;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 9:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 10;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 10:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 11;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 11:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 12;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 12:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 13;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 13:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 14;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 14:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 15;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 15:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 16;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 16:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 17;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 17:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 18;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 18:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 19;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 19:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 20;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 20:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 21;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 21:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 22;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 22:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 23;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 23:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 24;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 24:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 25;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 25:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 26;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 26:
			/* Element[START_ELEMENT(AppProtocol), END_ELEMENT] */
			if (appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex < appHandAnonType_supportedAppProtocolReq->AppProtocol.arrayLen ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					errn = encode_appHandAppProtocolType(stream, &appHandAnonType_supportedAppProtocolReq->AppProtocol.array [appHandAnonType_supportedAppProtocolReq_AppProtocol_currArrayIndex++]);
				}
				grammarID = 5;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 5:
			/* Element[END_ELEMENT] */
			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		default:
			errn = EXI_ERROR_UNKOWN_GRAMMAR_ID;
			break;
		}
		if(errn) {
			done = 1;
		}
	}
	return errn;
}

/* Complex type name='urn:iso:15118:2:2010:AppProtocol,#AnonType_supportedAppProtocolRes',  base type name='anyType',  content type='ELEMENT',  isAbstract='false',  hasTypeId='false',  final='0',  block='0',  particle='(ResponseCode,SchemaID{0-1})',  derivedBy='RESTRICTION'.  */
static int encode_appHandAnonType_supportedAppProtocolRes(bitstream_t* stream, struct appHandAnonType_supportedAppProtocolRes* appHandAnonType_supportedAppProtocolRes) {
	int grammarID = 27;
	int done = 0;
	
	
	while(!done) {
		switch(grammarID) {
		case 27:
			/* FirstStartTag[START_ELEMENT(ResponseCode)] */
			if ( 1 == 1 ) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					/* FirstStartTag[CHARACTERS[ENUMERATION]] */
					errn = encodeNBitUnsignedInteger(stream, 1, 0);
					if(errn == 0) {
						errn = encodeNBitUnsignedInteger(stream, 2, appHandAnonType_supportedAppProtocolRes->ResponseCode);
						/* valid EE */
						errn = encodeNBitUnsignedInteger(stream, 1, 0);
					}
				}
				grammarID = 28;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 28:
			/* Element[START_ELEMENT(SchemaID), END_ELEMENT] */
			if ( appHandAnonType_supportedAppProtocolRes->SchemaID_isUsed == 1u ) {
				errn = encodeNBitUnsignedInteger(stream, 2, 0);
				if(errn == 0) {
					/* FirstStartTag[CHARACTERS[NBIT_UNSIGNED_INTEGER]] */
					errn = encodeNBitUnsignedInteger(stream, 1, 0);
					if(errn == 0) {
						errn = encodeNBitUnsignedInteger(stream, 8, (uint32_t)(appHandAnonType_supportedAppProtocolRes->SchemaID - 0));
						/* valid EE */
						errn = encodeNBitUnsignedInteger(stream, 1, 0);
					}
				}
				grammarID = 5;
			} else 			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 2, 1);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		case 5:
			/* Element[END_ELEMENT] */
			if (1==1) {
				errn = encodeNBitUnsignedInteger(stream, 1, 0);
				if(errn == 0) {
					done = 1;
				}
				grammarID = 6;
			} else {
				errn = EXI_ERROR_UNKOWN_EVENT;
			}
			break;
		default:
			errn = EXI_ERROR_UNKOWN_GRAMMAR_ID;
			break;
		}
		if(errn) {
			done = 1;
		}
	}
	return errn;
}



int encode_appHandExiDocument(bitstream_t* stream, struct appHandEXIDocument* exiDoc) {
	errn = writeEXIHeader(stream);
	CH_DEBUG("======before call ====\n");
	CH_DEBUG("pos:%lu\n", *stream->pos);
	CH_DEBUG("size:%lu\n", stream->size);

	if(errn == 0) {
		/* DocContent[START_ELEMENT({urn:iso:15118:2:2010:AppProtocol}supportedAppProtocolReq), START_ELEMENT({urn:iso:15118:2:2010:AppProtocol}supportedAppProtocolRes), START_ELEMENT_GENERIC] */
		if ( exiDoc->supportedAppProtocolReq_isUsed == 1u ) { 
			/* START_ELEMENT({urn:iso:15118:2:2010:AppProtocol}supportedAppProtocolReq) */
			errn = encodeNBitUnsignedInteger(stream, 2, 0);
			CH_DEBUG("======after encodeNBitUnsignedInteger ====\n");
			CH_DEBUG("pos:%lu\n", *stream->pos);
			CH_DEBUG("size:%lu\n", stream->size);
			if(errn == 0) {
				errn = encode_appHandAnonType_supportedAppProtocolReq(stream, &exiDoc->supportedAppProtocolReq );
			}
			CH_DEBUG("======after supportedAppProtocolReq_isUsed ====\n");
			CH_DEBUG("pos:%lu\n", *stream->pos);
			CH_DEBUG("size:%lu\n", stream->size);
		} else if ( exiDoc->supportedAppProtocolRes_isUsed == 1u ) { 
			/* START_ELEMENT({urn:iso:15118:2:2010:AppProtocol}supportedAppProtocolRes) */
			errn = encodeNBitUnsignedInteger(stream, 2, 1);
			if(errn == 0) {
				errn = encode_appHandAnonType_supportedAppProtocolRes(stream, &exiDoc->supportedAppProtocolRes );
			}
			CH_DEBUG("======after supportedAppProtocolRes_isUsed ====\n");
			CH_DEBUG("pos:%lu\n", *stream->pos);
			CH_DEBUG("size:%lu\n", stream->size);
		} else {
			errn = EXI_ERROR_UNKOWN_EVENT;
		}

	}
	CH_DEBUG("======before flush ====\n");
	CH_DEBUG("pos:%lu\n", *stream->pos);
	CH_DEBUG("size:%lu\n", stream->size);
	CH_DEBUG("capacity:%lu\n", stream->capacity);
	if(errn == 0) {
		/* flush any pending bits */
		errn = encodeFinish(stream);
	}
	CH_DEBUG("======after call ====\n");
	CH_DEBUG("pos:%lu\n", *stream->pos);
	CH_DEBUG("size:%lu\n", stream->size);
	CH_DEBUG("capacity:%lu\n", stream->capacity);

	return errn;
}


#endif

