#-------------------------------------------------
#
# Project created by QtCreator 2020-04-20T16:19:01
#
#-------------------------------------------------

QT       -= core gui

TARGET = zmq
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../libzmq-master/src/address.cpp \
    ../libzmq-master/src/client.cpp \
    ../libzmq-master/src/clock.cpp \
    ../libzmq-master/src/ctx.cpp \
    ../libzmq-master/src/curve_client.cpp \
    ../libzmq-master/src/curve_mechanism_base.cpp \
    ../libzmq-master/src/curve_server.cpp \
    ../libzmq-master/src/dealer.cpp \
    ../libzmq-master/src/decoder_allocators.cpp \
    ../libzmq-master/src/devpoll.cpp \
    ../libzmq-master/src/dgram.cpp \
    ../libzmq-master/src/dish.cpp \
    ../libzmq-master/src/dist.cpp \
    ../libzmq-master/src/endpoint.cpp \
    ../libzmq-master/src/epoll.cpp \
    ../libzmq-master/src/err.cpp \
    ../libzmq-master/src/fq.cpp \
    ../libzmq-master/src/gather.cpp \
    ../libzmq-master/src/gssapi_client.cpp \
    ../libzmq-master/src/gssapi_mechanism_base.cpp \
    ../libzmq-master/src/gssapi_server.cpp \
    ../libzmq-master/src/io_object.cpp \
    ../libzmq-master/src/io_thread.cpp \
    ../libzmq-master/src/ip.cpp \
    ../libzmq-master/src/ip_resolver.cpp \
    ../libzmq-master/src/ipc_address.cpp \
    ../libzmq-master/src/ipc_connecter.cpp \
    ../libzmq-master/src/ipc_listener.cpp \
    ../libzmq-master/src/kqueue.cpp \
    ../libzmq-master/src/lb.cpp \
    ../libzmq-master/src/mailbox.cpp \
    ../libzmq-master/src/mailbox_safe.cpp \
    ../libzmq-master/src/mechanism.cpp \
    ../libzmq-master/src/mechanism_base.cpp \
    ../libzmq-master/src/metadata.cpp \
    ../libzmq-master/src/msg.cpp \
    ../libzmq-master/src/mtrie.cpp \
    ../libzmq-master/src/norm_engine.cpp \
    ../libzmq-master/src/null_mechanism.cpp \
    ../libzmq-master/src/object.cpp \
    ../libzmq-master/src/options.cpp \
    ../libzmq-master/src/own.cpp \
    ../libzmq-master/src/pair.cpp \
    ../libzmq-master/src/peer.cpp \
    ../libzmq-master/src/pgm_receiver.cpp \
    ../libzmq-master/src/pgm_sender.cpp \
    ../libzmq-master/src/pgm_socket.cpp \
    ../libzmq-master/src/pipe.cpp \
    ../libzmq-master/src/plain_client.cpp \
    ../libzmq-master/src/plain_server.cpp \
    ../libzmq-master/src/poll.cpp \
    ../libzmq-master/src/poller_base.cpp \
    ../libzmq-master/src/polling_util.cpp \
    ../libzmq-master/src/pollset.cpp \
    ../libzmq-master/src/precompiled.cpp \
    ../libzmq-master/src/proxy.cpp \
    ../libzmq-master/src/pub.cpp \
    ../libzmq-master/src/pull.cpp \
    ../libzmq-master/src/push.cpp \
    ../libzmq-master/src/radio.cpp \
    ../libzmq-master/src/radix_tree.cpp \
    ../libzmq-master/src/random.cpp \
    ../libzmq-master/src/raw_decoder.cpp \
    ../libzmq-master/src/raw_encoder.cpp \
    ../libzmq-master/src/raw_engine.cpp \
    ../libzmq-master/src/reaper.cpp \
    ../libzmq-master/src/rep.cpp \
    ../libzmq-master/src/req.cpp \
    ../libzmq-master/src/router.cpp \
    ../libzmq-master/src/scatter.cpp \
    ../libzmq-master/src/select.cpp \
    ../libzmq-master/src/server.cpp \
    ../libzmq-master/src/session_base.cpp \
    ../libzmq-master/src/signaler.cpp \
    ../libzmq-master/src/socket_base.cpp \
    ../libzmq-master/src/socket_poller.cpp \
    ../libzmq-master/src/socks.cpp \
    ../libzmq-master/src/socks_connecter.cpp \
    ../libzmq-master/src/stream.cpp \
    ../libzmq-master/src/stream_connecter_base.cpp \
    ../libzmq-master/src/stream_engine_base.cpp \
    ../libzmq-master/src/stream_listener_base.cpp \
    ../libzmq-master/src/sub.cpp \
    ../libzmq-master/src/tcp.cpp \
    ../libzmq-master/src/tcp_address.cpp \
    ../libzmq-master/src/tcp_connecter.cpp \
    ../libzmq-master/src/tcp_listener.cpp \
    ../libzmq-master/src/thread.cpp \
    ../libzmq-master/src/timers.cpp \
    ../libzmq-master/src/tipc_address.cpp \
    ../libzmq-master/src/tipc_connecter.cpp \
    ../libzmq-master/src/tipc_listener.cpp \
    ../libzmq-master/src/trie.cpp \
    ../libzmq-master/src/udp_address.cpp \
    ../libzmq-master/src/udp_engine.cpp \
    ../libzmq-master/src/v1_decoder.cpp \
    ../libzmq-master/src/v1_encoder.cpp \
    ../libzmq-master/src/v2_decoder.cpp \
    ../libzmq-master/src/v2_encoder.cpp \
    ../libzmq-master/src/v3_1_encoder.cpp \
    ../libzmq-master/src/vmci.cpp \
    ../libzmq-master/src/vmci_address.cpp \
    ../libzmq-master/src/vmci_connecter.cpp \
    ../libzmq-master/src/vmci_listener.cpp \
    ../libzmq-master/src/ws_address.cpp \
    ../libzmq-master/src/ws_connecter.cpp \
    ../libzmq-master/src/ws_decoder.cpp \
    ../libzmq-master/src/ws_encoder.cpp \
    ../libzmq-master/src/ws_engine.cpp \
    ../libzmq-master/src/ws_listener.cpp \
    ../libzmq-master/src/wss_address.cpp \
    ../libzmq-master/src/wss_engine.cpp \
    ../libzmq-master/src/xpub.cpp \
    ../libzmq-master/src/xsub.cpp \
    ../libzmq-master/src/zap_client.cpp \
    ../libzmq-master/src/zmq.cpp \
    ../libzmq-master/src/zmq_utils.cpp \
    ../libzmq-master/src/zmtp_engine.cpp \
    ../libzmq-master/src/tweetnacl.c

HEADERS += \
    ../libzmq-master/src/address.hpp \
    ../libzmq-master/src/array.hpp \
    ../libzmq-master/src/atomic_counter.hpp \
    ../libzmq-master/src/atomic_ptr.hpp \
    ../libzmq-master/src/blob.hpp \
    ../libzmq-master/src/client.hpp \
    ../libzmq-master/src/clock.hpp \
    ../libzmq-master/src/command.hpp \
    ../libzmq-master/src/condition_variable.hpp \
    ../libzmq-master/src/config.hpp \
    ../libzmq-master/src/ctx.hpp \
    ../libzmq-master/src/curve_client.hpp \
    ../libzmq-master/src/curve_client_tools.hpp \
    ../libzmq-master/src/curve_mechanism_base.hpp \
    ../libzmq-master/src/curve_server.hpp \
    ../libzmq-master/src/dbuffer.hpp \
    ../libzmq-master/src/dealer.hpp \
    ../libzmq-master/src/decoder.hpp \
    ../libzmq-master/src/decoder_allocators.hpp \
    ../libzmq-master/src/devpoll.hpp \
    ../libzmq-master/src/dgram.hpp \
    ../libzmq-master/src/dish.hpp \
    ../libzmq-master/src/dist.hpp \
    ../libzmq-master/src/encoder.hpp \
    ../libzmq-master/src/endpoint.hpp \
    ../libzmq-master/src/epoll.hpp \
    ../libzmq-master/src/err.hpp \
    ../libzmq-master/src/fd.hpp \
    ../libzmq-master/src/fq.hpp \
    ../libzmq-master/src/gather.hpp \
    ../libzmq-master/src/generic_mtrie.hpp \
    ../libzmq-master/src/generic_mtrie_impl.hpp \
    ../libzmq-master/src/gssapi_client.hpp \
    ../libzmq-master/src/gssapi_mechanism_base.hpp \
    ../libzmq-master/src/gssapi_server.hpp \
    ../libzmq-master/src/i_decoder.hpp \
    ../libzmq-master/src/i_encoder.hpp \
    ../libzmq-master/src/i_engine.hpp \
    ../libzmq-master/src/i_mailbox.hpp \
    ../libzmq-master/src/i_poll_events.hpp \
    ../libzmq-master/src/io_object.hpp \
    ../libzmq-master/src/io_thread.hpp \
    ../libzmq-master/src/ip.hpp \
    ../libzmq-master/src/ip_resolver.hpp \
    ../libzmq-master/src/ipc_address.hpp \
    ../libzmq-master/src/ipc_connecter.hpp \
    ../libzmq-master/src/ipc_listener.hpp \
    ../libzmq-master/src/kqueue.hpp \
    ../libzmq-master/src/lb.hpp \
    ../libzmq-master/src/likely.hpp \
    ../libzmq-master/src/macros.hpp \
    ../libzmq-master/src/mailbox.hpp \
    ../libzmq-master/src/mailbox_safe.hpp \
    ../libzmq-master/src/mechanism.hpp \
    ../libzmq-master/src/mechanism_base.hpp \
    ../libzmq-master/src/metadata.hpp \
    ../libzmq-master/src/msg.hpp \
    ../libzmq-master/src/mtrie.hpp \
    ../libzmq-master/src/mutex.hpp \
    ../libzmq-master/src/norm_engine.hpp \
    ../libzmq-master/src/null_mechanism.hpp \
    ../libzmq-master/src/object.hpp \
    ../libzmq-master/src/options.hpp \
    ../libzmq-master/src/own.hpp \
    ../libzmq-master/src/pair.hpp \
    ../libzmq-master/src/peer.hpp \
    ../libzmq-master/src/pgm_receiver.hpp \
    ../libzmq-master/src/pgm_sender.hpp \
    ../libzmq-master/src/pgm_socket.hpp \
    ../libzmq-master/src/pipe.hpp \
    ../libzmq-master/src/plain_client.hpp \
    ../libzmq-master/src/plain_common.hpp \
    ../libzmq-master/src/plain_server.hpp \
    ../libzmq-master/src/platform.hpp \
    ../libzmq-master/src/poll.hpp \
    ../libzmq-master/src/poller.hpp \
    ../libzmq-master/src/poller_base.hpp \
    ../libzmq-master/src/polling_util.hpp \
    ../libzmq-master/src/pollset.hpp \
    ../libzmq-master/src/precompiled.hpp \
    ../libzmq-master/src/proxy.hpp \
    ../libzmq-master/src/pub.hpp \
    ../libzmq-master/src/pull.hpp \
    ../libzmq-master/src/push.hpp \
    ../libzmq-master/src/radio.hpp \
    ../libzmq-master/src/radix_tree.hpp \
    ../libzmq-master/src/random.hpp \
    ../libzmq-master/src/raw_decoder.hpp \
    ../libzmq-master/src/raw_encoder.hpp \
    ../libzmq-master/src/raw_engine.hpp \
    ../libzmq-master/src/reaper.hpp \
    ../libzmq-master/src/rep.hpp \
    ../libzmq-master/src/req.hpp \
    ../libzmq-master/src/router.hpp \
    ../libzmq-master/src/scatter.hpp \
    ../libzmq-master/src/secure_allocator.hpp \
    ../libzmq-master/src/select.hpp \
    ../libzmq-master/src/server.hpp \
    ../libzmq-master/src/session_base.hpp \
    ../libzmq-master/src/signaler.hpp \
    ../libzmq-master/src/socket_base.hpp \
    ../libzmq-master/src/socket_poller.hpp \
    ../libzmq-master/src/socks.hpp \
    ../libzmq-master/src/socks_connecter.hpp \
    ../libzmq-master/src/stdint.hpp \
    ../libzmq-master/src/stream.hpp \
    ../libzmq-master/src/stream_connecter_base.hpp \
    ../libzmq-master/src/stream_engine_base.hpp \
    ../libzmq-master/src/stream_listener_base.hpp \
    ../libzmq-master/src/sub.hpp \
    ../libzmq-master/src/tcp.hpp \
    ../libzmq-master/src/tcp_address.hpp \
    ../libzmq-master/src/tcp_connecter.hpp \
    ../libzmq-master/src/tcp_listener.hpp \
    ../libzmq-master/src/thread.hpp \
    ../libzmq-master/src/timers.hpp \
    ../libzmq-master/src/tipc_address.hpp \
    ../libzmq-master/src/tipc_connecter.hpp \
    ../libzmq-master/src/tipc_listener.hpp \
    ../libzmq-master/src/trie.hpp \
    ../libzmq-master/src/tweetnacl.h \
    ../libzmq-master/src/udp_address.hpp \
    ../libzmq-master/src/udp_engine.hpp \
    ../libzmq-master/src/v1_decoder.hpp \
    ../libzmq-master/src/v1_encoder.hpp \
    ../libzmq-master/src/v2_decoder.hpp \
    ../libzmq-master/src/v2_encoder.hpp \
    ../libzmq-master/src/v2_protocol.hpp \
    ../libzmq-master/src/v3_1_encoder.hpp \
    ../libzmq-master/src/vmci.hpp \
    ../libzmq-master/src/vmci_address.hpp \
    ../libzmq-master/src/vmci_connecter.hpp \
    ../libzmq-master/src/vmci_listener.hpp \
    ../libzmq-master/src/windows.hpp \
    ../libzmq-master/src/wire.hpp \
    ../libzmq-master/src/ws_address.hpp \
    ../libzmq-master/src/ws_connecter.hpp \
    ../libzmq-master/src/ws_decoder.hpp \
    ../libzmq-master/src/ws_encoder.hpp \
    ../libzmq-master/src/ws_engine.hpp \
    ../libzmq-master/src/ws_listener.hpp \
    ../libzmq-master/src/ws_protocol.hpp \
    ../libzmq-master/src/wss_address.hpp \
    ../libzmq-master/src/wss_engine.hpp \
    ../libzmq-master/src/xpub.hpp \
    ../libzmq-master/src/xsub.hpp \
    ../libzmq-master/src/ypipe.hpp \
    ../libzmq-master/src/ypipe_base.hpp \
    ../libzmq-master/src/ypipe_conflate.hpp \
    ../libzmq-master/src/yqueue.hpp \
    ../libzmq-master/src/zap_client.hpp \
    ../libzmq-master/src/zmq_draft.h \
    ../libzmq-master/src/zmtp_engine.hpp
unix {
    target.path = /usr/lib
    INSTALLS += target
}
