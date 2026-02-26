-- Last updated: 3/6/2026, 12:39:07 AM
select
    sample_id,
    dna_sequence,
    species,
    if (LEFT (dna_sequence, 3) = 'ATG', 1, 0) as has_start,
    IF (
        RIGHT (dna_sequence, 3) = 'TAA'
        OR RIGHT (dna_sequence, 3) = 'TAG'
        OR RIGHT (dna_sequence, 3) = 'TGA',
        1,0
    ) AS has_stop,
    if (INSTR (dna_sequence, 'ATAT') > 0, 1, 0) as has_atat,
    if (INSTR (dna_sequence, 'GGG') > 0, 1, 0) as has_ggg
from
    Samples