
const getMaxProfit = (prices) => {
  let maxProfit = 0;

  for (let buyDay = 0; buyDay < prices.length; buyDay++) {
    const buyPrice = prices[buyDay];

    for (let sellDay = buyDay + 1; sellDay < prices.length; sellDay++) {
      const sellPrice = prices[sellDay];
      const currentProfit = sellPrice - buyPrice;

      maxProfit = Math.max(maxProfit, currentProfit);
    }
  }

  return maxProfit;
};
