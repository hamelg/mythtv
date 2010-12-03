#ifndef __MYTH_EXIT_CODES__
#define __MYTH_EXIT_CODES__

// ALL statuses that are not to be mapped directly to an exit code *must*
// be > 256 for sanity's sakes.  The functionality of 
// mythwelcome/welcomedialog.cpp depends on being able to use exit code as an
// 8-bit masked integer.

#define GENERIC_EXIT_OK                             0
#define GENERIC_EXIT_NOT_OK                       255
#define GENERIC_EXIT_NO_MYTHCONTEXT               254
#define GENERIC_EXIT_NO_THEME                     253
#define GENERIC_EXIT_INVALID_CMDLINE              252
#define GENERIC_EXIT_DB_OUTOFDATE                 251
#define GENERIC_EXIT_DB_ERROR                     250
#define GENERIC_EXIT_SOCKET_ERROR                 249
#define GENERIC_EXIT_OPENING_LOGFILE_ERROR        248
#define GENERIC_EXIT_UNKNOWN_ERROR                247
#define GENERIC_EXIT_EXECL_ERROR                  246
#define FIXME_BUG__LIBRARY_EXIT_NO_THEME          245
#define FIXME_BUG__LIBRARY_EXIT_TFW_FAILED_OPEN   244
#define GENERIC_EXIT_INVALID_TIMEZONE             243
#define GENERIC_EXIT_SIGNALLED                    242
#define GENERIC_EXIT_TIMEOUT                      241
#define GENERIC_EXIT_ABORTED                      240
#define GENERIC_EXIT_RUNNING                      239
#define GENERIC_EXIT_PIPE_FAILURE                 238
#define GENERIC_EXIT_TERMINATED                   237
#define GENERIC_EXIT_START                        236
#define GENERIC_EXIT_CMD_NOT_FOUND                127

// libmyth
#define MYTHSYSTEM__EXIT__EXECL_ERROR             GENERIC_EXIT_EXECL_ERROR
#define MYTHSYSTEM__EXIT__CMD_NOT_FOUND           GENERIC_EXIT_CMD_NOT_FOUND
#define MYTHSYSTEM__EXIT__PIPE_FAILURE            GENERIC_EXIT_PIPE_FAILURE

// libmythtv
#define CHANNEL__EXIT__EXECL_ERROR                GENERIC_EXIT_EXECL_ERROR

// mythfrontend
#define FRONTEND_EXIT_OK                          GENERIC_EXIT_OK
#define FRONTEND_EXIT_NO_MYTHCONTEXT              GENERIC_EXIT_NO_MYTHCONTEXT
#define FRONTEND_EXIT_INVALID_CMDLINE             GENERIC_EXIT_INVALID_CMDLINE
#define FRONTEND_EXIT_NO_THEME                    GENERIC_EXIT_NO_THEME
#define FRONTEND_EXIT_OPENING_LOGFILE_ERROR       GENERIC_EXIT_OPENING_LOGFILE_ERROR
#define FRONTEND_EXIT_DB_OUTOFDATE                GENERIC_EXIT_DB_OUTOFDATE
#define FRONTEND_EXIT_DB_ERROR                    GENERIC_EXIT_DB_ERROR

#define FRONTEND_EXIT_INVALID_TIMEZONE            GENERIC_EXIT_INVALID_TIMEZONE
#define FRONTEND_BUGGY_EXIT_NO_THEME              GENERIC_EXIT_NO_THEME
#define FRONTEND_BUGGY_EXIT_NO_SELECTOR           GENERIC_EXIT_START-1
#define FRONTEND_EXIT_START                       GENERIC_EXIT_START-1

// mythbackend
#define BACKEND_EXIT_OK                           GENERIC_EXIT_OK
#define BACKEND_EXIT_NO_MYTHCONTEXT               GENERIC_EXIT_NO_MYTHCONTEXT
#define BACKEND_EXIT_INVALID_CMDLINE              GENERIC_EXIT_INVALID_CMDLINE
#define BACKEND_EXIT_DB_OUTOFDATE                 GENERIC_EXIT_DB_OUTOFDATE
#define BACKEND_EXIT_DB_ERROR                     GENERIC_EXIT_DB_ERROR
#define BACKEND_EXIT_INVALID_TIMEZONE             GENERIC_EXIT_INVALID_TIMEZONE
#define BACKEND_EXIT_OPENING_LOGFILE_ERROR        GENERIC_EXIT_OPENING_LOGFILE_ERROR
#define BACKEND_EXIT_NO_CONNECT                   GENERIC_EXIT_START-1
#define BACKEND_EXIT_NO_IP_ADDRESS                GENERIC_EXIT_START-2
#define BACKEND_EXIT_CAP_CARD_SETUP_ERROR         GENERIC_EXIT_START-3
#define BACKEND_EXIT_OPENING_PIDFILE_ERROR        GENERIC_EXIT_START-4
#define BACKEND_EXIT_OPENING_VLOCKFILE_ERROR      GENERIC_EXIT_START-5
#define BACKEND_EXIT_DAEMONIZING_ERROR            GENERIC_EXIT_START-6

#define BACKEND_BUGGY_EXIT_NO_BIND_MAIN           GENERIC_EXIT_START-7
#define BACKEND_BUGGY_EXIT_NO_BIND_STATUS         GENERIC_EXIT_START-8
#define BACKEND_BUGGY_EXIT_UNKNOWN_ENC            GENERIC_EXIT_START-9
#define BACKEND_BUGGY_EXIT_UNKNOWN_FILE_SOCK      GENERIC_EXIT_START-10
#define BACKEND_EXIT_NO_CAP_CARD                  GENERIC_EXIT_START-11
#define BACKEND_EXIT_NO_CHAN_DATA                 GENERIC_EXIT_START-12
#define BACKEND_EXIT_PERMISSIONS_ERROR            GENERIC_EXIT_START-13
#define BACKEND_EXIT_START                        GENERIC_EXIT_START-13

// mythtranscode
#define TRANSCODE_EXIT_OK                         GENERIC_EXIT_OK
#define TRANSCODE_EXIT_NO_MYTHCONTEXT             GENERIC_EXIT_NO_MYTHCONTEXT
#define TRANSCODE_EXIT_DB_ERROR                   GENERIC_EXIT_DB_ERROR
#define TRANSCODE_EXIT_INVALID_CMDLINE            GENERIC_EXIT_INVALID_CMDLINE
#define TRANSCODE_EXIT_UNKNOWN_ERROR              GENERIC_EXIT_UNKNOWN_ERROR
#define TRANSCODE_EXIT_NO_RECORDING_DATA          GENERIC_EXIT_START-1
#define TRANSCODE_EXIT_REMOTE_FILE                GENERIC_EXIT_START-2
#define TRANSCODE_EXIT_ERROR_CUTLIST_UPDATE       GENERIC_EXIT_START-3
#define TRANSCODE_EXIT_STOPPED                    GENERIC_EXIT_START-4

#define TRANSCODE_BUGGY_EXIT_INVALID_MARKER       GENERIC_EXIT_START-5
#define TRANSCODE_BUGGY_EXIT_NO_AUDIO_BUFFERS     GENERIC_EXIT_START-6
#define TRANSCODE_BUGGY_EXIT_NO_VIDEO_BUFFERS     GENERIC_EXIT_START-7
#define TRANSCODE_BUGGY_EXIT_INVALID_OUT_PARAMS   GENERIC_EXIT_START-8
#define TRANSCODE_BUGGY_EXIT_WRITE_FRAME_ERROR    GENERIC_EXIT_START-9
#define TRANSCODE_BUGGY_EXIT_INVALID_AUDIO        GENERIC_EXIT_START-10
#define TRANSCODE_BUGGY_EXIT_INVALID_VIDEO        GENERIC_EXIT_START-11
#define TRANSCODE_BUGGY_EXIT_DEADLOCK             GENERIC_EXIT_START-12
#define TRANSCODE_EXIT_RESTART                    GENERIC_EXIT_START-13
#define TRANSCODE_EXIT_START                      GENERIC_EXIT_START-13

// mythfilldatabase
#define FILLDB_EXIT_OK                            GENERIC_EXIT_OK
#define FILLDB_EXIT_NO_MYTHCONTEXT                GENERIC_EXIT_NO_MYTHCONTEXT
#define FILLDB_EXIT_DB_ERROR                      GENERIC_EXIT_DB_ERROR
#define FILLDB_EXIT_INVALID_CMDLINE               GENERIC_EXIT_INVALID_CMDLINE
#define FILLDB_EXIT_NO_CHAN_SRC                   GENERIC_EXIT_START-1
#define FILLDB_EXIT_UNKNOWN_ICON_GROUP            GENERIC_EXIT_START-2
#define FILLDB_EXIT_GRAB_DATA_FAILED              GENERIC_EXIT_START-3

#define FILLDB_BUGGY_EXIT_SRC_IS_DD               GENERIC_EXIT_START-4
#define FILLDB_EXIT_START                         GENERIC_EXIT_START-4

// mythjobqueue
#define JOBQUEUE_EXIT_OK                          GENERIC_EXIT_OK
#define JOBQUEUE_EXIT_NO_MYTHCONTEXT              GENERIC_EXIT_NO_MYTHCONTEXT
#define JOBQUEUE_EXIT_INVALID_CMDLINE             GENERIC_EXIT_INVALID_CMDLINE
#define JOBQUEUE_EXIT_START                       GENERIC_EXIT_START
#define JOBQUEUE_EXIT_OPENING_PIDFILE_ERROR       GENERIC_EXIT_START-1
#define JOBQUEUE_EXIT_DAEMONIZING_ERROR           GENERIC_EXIT_START-2

// mythtv
#define TV_EXIT_OK                                GENERIC_EXIT_OK
#define TV_EXIT_NO_MYTHCONTEXT                    GENERIC_EXIT_NO_MYTHCONTEXT
#define TV_EXIT_NO_THEME                          GENERIC_EXIT_NO_THEME
#define TV_EXIT_NO_AUDIO                          GENERIC_EXIT_START-1
#define TV_EXIT_NO_TV                             GENERIC_EXIT_START-2
#define TV_EXIT_START                             GENERIC_EXIT_START-2

// mythtvosd
#define TVOSD_EXIT_OK                             GENERIC_EXIT_OK
#define TVOSD_EXIT_INVALID_CMDLINE                GENERIC_EXIT_INVALID_CMDLINE
#define TVOSD_EXIT_SOCKET_ERROR                   GENERIC_EXIT_SOCKET_ERROR
#define TVOSD_EXIT_NO_TEMPLATE                    GENERIC_EXIT_START-1
#define TVOSD_EXIT_START                          GENERIC_EXIT_START-1

// mythwelcome
#define WELCOME_BUGGY_EXIT_NO_THEME               GENERIC_EXIT_NO_THEME

// Commercial flagging should return number of breaks,
// or one of these exit codes
#define COMMFLAG_EXIT_NO_ERROR_WITH_NO_BREAKS     GENERIC_EXIT_OK

#define COMMFLAG_EXIT_NO_MYTHCONTEXT              GENERIC_EXIT_NO_MYTHCONTEXT
#define COMMFLAG_EXIT_DB_ERROR                    GENERIC_EXIT_DB_ERROR
#define COMMFLAG_EXIT_INVALID_CHANID              GENERIC_EXIT_START-1
#define COMMFLAG_EXIT_INVALID_STARTTIME           GENERIC_EXIT_START-2
#define COMMFLAG_EXIT_INVALID_CMDLINE             GENERIC_EXIT_START-3
#define COMMFLAG_EXIT_NO_PROGRAM_DATA             GENERIC_EXIT_START-4
#define COMMFLAG_EXIT_IN_USE                      GENERIC_EXIT_START-5
#define COMMFLAG_BUGGY_EXIT_NO_CHAN_DATA          GENERIC_EXIT_START-6
#define COMMFLAG_EXIT_NO_RINGBUFFER               GENERIC_EXIT_START-7
#define COMMFLAG_EXIT_START                       GENERIC_EXIT_START-7

// MythTranscodeDaemon
#define MTD_EXIT_OK                               GENERIC_EXIT_OK
#define MTD_EXIT_NOT_OK                           GENERIC_EXIT_NOT_OK
#define MTD_EXIT_NO_MYTHCONTEXT                   GENERIC_EXIT_NO_MYTHCONTEXT
#define MTD_EXIT_INVALID_CMDLINE                  GENERIC_EXIT_INVALID_CMDLINE
#define MTD_EXIT_DB_ERROR                         GENERIC_EXIT_DB_ERROR
#define MTD_EXIT_DAEMONIZING_ERROR                GENERIC_EXIT_START-1

// MythPreviewGen
#define PREVIEWGEN_EXIT_OK                        GENERIC_EXIT_OK
#define PREVIEWGEN_EXIT_NOT_OK                    GENERIC_EXIT_NOT_OK
#define PREVIEWGEN_EXIT_NO_MYTHCONTEXT            GENERIC_EXIT_NO_MYTHCONTEXT
#define PREVIEWGEN_EXIT_INVALID_CMDLINE           GENERIC_EXIT_INVALID_CMDLINE
#define PREVIEWGEN_EXIT_DB_ERROR                  GENERIC_EXIT_DB_ERROR
#define PREVIEWGEN_EXIT_DAEMONIZING_ERROR         GENERIC_EXIT_START-1

#endif // __MYTH_EXIT_CODES__
