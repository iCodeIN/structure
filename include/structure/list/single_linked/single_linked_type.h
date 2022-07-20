#pragma once
#include <stdint.h>
#include <stddef.h>

#include <synapse/memory/interface/memory_manager.h>
#include <structure/defines/handle/opaque_handle.h>

synapse_structure_opaque_handle_declare
    (synapse_structure_single_linked);

typedef struct
    synapse_structure_single_linked_node
{
    void*
        ptr_node_data;
    size_t
        size_node_data;
} synapse_structure_single_linked_node;