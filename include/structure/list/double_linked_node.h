#pragma once
#include <structure/list/double_linked_type.h>

void*
synapse_structure_double_linked_node_data (synapse_structure_double_linked_node);

size_t
synapse_structure_double_linked_node_size (synapse_structure_double_linked_node);

synapse_structure_double_linked_node
synapse_structure_double_linked_node_next (synapse_structure_double_linked_node);

synapse_structure_double_linked_node
synapse_structure_double_linked_node_prev (synapse_structure_double_linked_node);

synapse_structure_double_linked_node
synapse_structure_double_linked_node_begin(synapse_structure_double_linked);

synapse_structure_double_linked_node
synapse_structure_double_linked_node_end  (synapse_structure_double_linked);