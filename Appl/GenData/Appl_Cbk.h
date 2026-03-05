/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: 
 *          Customer: 
 *       Expiry Date: Not restricted
 *    License Scope : The usage is restricted to PAI12858
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Appl_Cbk.h
 *   Generation Time: 2025-09-22 12:57:37
 *           Project: Autosar_BDU - Version 1.0
 *          Delivery: PAI12858
 *      Tool Version: DaVinci Configurator Classic (beta) 5.30.18 S-5
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Classic and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/**********************************************************************************************************************
 * WARNING: This code has been generated with reduced-severity errors. 
 * The created output files contain errors that have been ignored. Usage of the created files can lead to unpredictable behavior of the embedded code.
 * Usage of the created files happens at own risk!
 * 
 * [Warning] COM02205 - Inconsistent signal layout. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/EcuC/EcucPduCollection/BDU_20_e3e6cdf9_Tx[0:PduLength](value=6) of /ActiveEcuC/Com/ComConfig/BDU_20_e3e6cdf9_Tx cannot hold contained ComSignals / ComGroupSignals.
 * 
 * Exceeding signals:
 * /ActiveEcuC/Com/ComConfig/BDU_FVLSB20_187acbd8_Tx, /ActiveEcuC/Com/ComConfig/BDU_MACMSB20_233ce004_Tx
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/BDU_FVLSB20_187acbd8_Tx[0:ComBitPosition](value=48) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/BDU_MACMSB20_233ce004_Tx[0:ComBitPosition](value=64) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/BDU_FVLSB20_187acbd8_Tx[0:ComBitSize](value=16) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/BDU_MACMSB20_233ce004_Tx[0:ComBitSize](value=32) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/EcuC/EcucPduCollection/BDU_20_e3e6cdf9_Tx[0:PduLength](value=6) (DefRef: /MICROSAR/EcuC/EcucPduCollection/Pdu/PduLength)
 * /ActiveEcuC/Com/ComConfig/BDU_20_e3e6cdf9_Tx[5:ComIPduSignalRef](value=/ActiveEcuC/Com/ComConfig/BDU_FVLSB20_187acbd8_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/BDU_20_e3e6cdf9_Tx[8:ComIPduSignalRef](value=/ActiveEcuC/Com/ComConfig/BDU_MACMSB20_233ce004_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/BDU_FVLSB20_187acbd8_Tx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/BDU_MACMSB20_233ce004_Tx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/BDU_FVLSB20_187acbd8_Tx[0:ComSignalType](value=UINT16) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/BDU_MACMSB20_233ce004_Tx[0:ComSignalType](value=UINT32) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * 
 * [Warning] COM02205 - Inconsistent signal layout. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/EcuC/EcucPduCollection/BDU_RemCtrl_ea1e98d2_Tx[0:PduLength](value=6) of /ActiveEcuC/Com/ComConfig/BDU_RemCtrl_ea1e98d2_Tx cannot hold contained ComSignals / ComGroupSignals.
 * 
 * Exceeding signals:
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlFVLSB_82ab4e4b_Tx, /ActiveEcuC/Com/ComConfig/BDU_RemCtrlMACMSB_0e59fa0a_Tx
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlFVLSB_82ab4e4b_Tx[0:ComBitPosition](value=48) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlMACMSB_0e59fa0a_Tx[0:ComBitPosition](value=64) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlFVLSB_82ab4e4b_Tx[0:ComBitSize](value=16) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlMACMSB_0e59fa0a_Tx[0:ComBitSize](value=32) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/EcuC/EcucPduCollection/BDU_RemCtrl_ea1e98d2_Tx[0:PduLength](value=6) (DefRef: /MICROSAR/EcuC/EcucPduCollection/Pdu/PduLength)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrl_ea1e98d2_Tx[2:ComIPduSignalRef](value=/ActiveEcuC/Com/ComConfig/BDU_RemCtrlFVLSB_82ab4e4b_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrl_ea1e98d2_Tx[3:ComIPduSignalRef](value=/ActiveEcuC/Com/ComConfig/BDU_RemCtrlMACMSB_0e59fa0a_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlFVLSB_82ab4e4b_Tx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlMACMSB_0e59fa0a_Tx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlFVLSB_82ab4e4b_Tx[0:ComSignalType](value=UINT16) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/BDU_RemCtrlMACMSB_0e59fa0a_Tx[0:ComSignalType](value=UINT32) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * 
 * [Warning] COM02205 - Inconsistent signal layout. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/EcuC/EcucPduCollection/BDU_SyncMsg_7a9cb2be_Tx[0:PduLength](value=0) of /ActiveEcuC/Com/ComConfig/BDU_SyncMsg_7a9cb2be_Tx cannot hold contained ComSignals / ComGroupSignals.
 * 
 * Exceeding signals:
 * /ActiveEcuC/Com/ComConfig/BDU_TripCnt_a9dd5c5d_Tx, /ActiveEcuC/Com/ComConfig/BDU_ResetCnt_1306d705_Tx, /ActiveEcuC/Com/ComConfig/BDU_SyncMsgMAC_d7106848_Tx
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/BDU_ResetCnt_1306d705_Tx[0:ComBitPosition](value=24) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/BDU_SyncMsgMAC_d7106848_Tx[0:ComBitPosition](value=40) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/BDU_TripCnt_a9dd5c5d_Tx[0:ComBitPosition](value=0) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/BDU_ResetCnt_1306d705_Tx[0:ComBitSize](value=16) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/BDU_TripCnt_a9dd5c5d_Tx[0:ComBitSize](value=24) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/BDU_SyncMsgMAC_d7106848_Tx[0:ComSignalLength](value=11) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalLength)
 * /ActiveEcuC/EcuC/EcucPduCollection/BDU_SyncMsg_7a9cb2be_Tx[0:PduLength](value=0) (DefRef: /MICROSAR/EcuC/EcucPduCollection/Pdu/PduLength)
 * /ActiveEcuC/Com/ComConfig/BDU_SyncMsg_7a9cb2be_Tx[0:ComIPduSignalRef](value=/ActiveEcuC/Com/ComConfig/BDU_ResetCnt_1306d705_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/BDU_SyncMsg_7a9cb2be_Tx[1:ComIPduSignalRef](value=/ActiveEcuC/Com/ComConfig/BDU_SyncMsgMAC_d7106848_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/BDU_SyncMsg_7a9cb2be_Tx[2:ComIPduSignalRef](value=/ActiveEcuC/Com/ComConfig/BDU_TripCnt_a9dd5c5d_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/BDU_ResetCnt_1306d705_Tx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/BDU_SyncMsgMAC_d7106848_Tx[0:ComSignalEndianness](value=OPAQUE) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/BDU_TripCnt_a9dd5c5d_Tx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/BDU_ResetCnt_1306d705_Tx[0:ComSignalType](value=UINT16) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/BDU_SyncMsgMAC_d7106848_Tx[0:ComSignalType](value=UINT8_N) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/BDU_TripCnt_a9dd5c5d_Tx[0:ComSignalType](value=UINT32) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * 
 * [Warning] COM02300 - Invalid configuration of ComBitSize/ComSignalLength. 
 * - [Reduced Severity due to User-Defined Parameter] If the ComSignalType of /ActiveEcuC/Com/ComConfig/BLE_Debug02Data_36365306_Rx is set to UINT8_N, therefore the parameter /ActiveEcuC/Com/ComConfig/BLE_Debug02Data_36365306_Rx[0:ComSignalEndianness](value=LITTLE_ENDIAN) must be set to OPAQUE.
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/BLE_Debug02Data_36365306_Rx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * 
 * [Warning] COM02300 - Invalid configuration of ComBitSize/ComSignalLength. 
 * - [Reduced Severity due to User-Defined Parameter] If the ComSignalType of /ActiveEcuC/Com/ComConfig/BLE_DebugData_9c5ac2e2_Rx is set to UINT8_N, therefore the parameter /ActiveEcuC/Com/ComConfig/BLE_DebugData_9c5ac2e2_Rx[0:ComSignalEndianness](value=LITTLE_ENDIAN) must be set to OPAQUE.
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/BLE_DebugData_9c5ac2e2_Rx[0:ComSignalEndianness](value=LITTLE_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * The generated code contains features that are not licensed and thus serial production is not allowed. The code may include errors.
 * 
 * [Warning] Cfg00033 - No valid license file. Serial production is not allowed! 
 * - No license file (.veplc) found in the BSW package. Please contact the Vector support to obtain valid licenses.
 *********************************************************************************************************************/

#if !defined (APPL_CBK_H)
# define APPL_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "Com_MemMap.h"


/* Configurable notification interface prototypes */



#define COM_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "Com_MemMap.h"

#endif  /* APPL_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Appl_Cbk.h
**********************************************************************************************************************/

