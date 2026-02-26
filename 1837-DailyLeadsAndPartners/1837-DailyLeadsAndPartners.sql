-- Last updated: 3/6/2026, 12:41:15 AM
select date_id, make_name, COUNT(DISTINCT lead_id) as unique_leads, COUNT(DISTINCT partner_id) as unique_partners from DailySales group by date_id, make_name